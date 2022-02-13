#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int id;
    float Experience;
    float salary;
};
int main()
{
   int n=5,i=0;
   struct employee employees[n];
   printf("Enter employee details of %d\n",i+1);
   for(i=0;i<n;i++)
   {
       printf("Employee %d: \n",i+1);
       {
           printf("Name:",i+1);
           scanf("%s",&employees[i].name);
           printf("id:",i+1);
           scanf("%d",&employees[i].id);
           printf("Experience in year:",i+1);
           scanf("%f",&employees[i].Experience);
           printf("Salary:",i+1);
           scanf("%f",&employees[i].salary);
       }
       char ch=getchar();
       printf("\n");
   }
   printf("\nEmployee information:\n");
   for(i=0;i<n;i++)
   {
       printf("\nEmployee%d\nName:%s",i+1,employees[i].name);
       printf("\nEmployee id:%d",employees[i].id);
       printf("\nEmployee Experience:%f",employees[i].Experience);
       printf("\nEmployee salary:%f",employees[i].salary);

   }
   return 0;

}
