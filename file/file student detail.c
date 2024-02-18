#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,PhoneNumber;
    int n,i;

    file = fopen("student.txt","a");
     if(file==NULL)
     {
         printf("File does not exist");

     }
     else
     {
         printf("File is open\n");

         printf("Enter Number of student  :");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             printf("Enter your name  : ");
             scanf("%s",&name);

             printf("Enter student Age  : ");
             scanf("%d",&age);

             printf("Enter Student phone number  : ");
             scanf("%d",&PhoneNumber);

             fprintf(file,"\n%s\t\t%d\t%d",name,age,PhoneNumber);

         }
         fclose(file);
     }
     getch();
}
