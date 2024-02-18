#include<stdio.h>
int main()
{
    FILE *file;
    char fname[20];
    char lname[20];
    int age;
    file = fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exist");

    }
    else{
        printf("File is open\n");
        fscanf(file,"%s\t%s\t%d",&fname,&lname,&age);
        printf("%s\t%s\t%d\n",fname,lname,age);
        fclose(file);
    }
    getch();
}
