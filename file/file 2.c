#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    file =fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your university name :");
        gets(name);
        fputs(name,file);
        fputs("\n",file);
        printf("File is written successfully ");
        fclose(file);
    }
    getch();
}
