//structure for single detail
#include<stdio.h>
 struct student
 {
     int stuid;
     char name[10];
     int total;
 };
 int main()
{
    struct student s;
    printf("Enter details:\n");
    scanf("%d%s%d",&s.stuid,s.name,&s.total);
    printf("Details are:\n");
    printf("ID is %d\n",s.stuid);
    printf("Name is %s\n",s.name);
    printf("Total is %d\n",s.total);
    return 0;
}
//structure with array
#include<stdio.h>
 struct student
 {
     int stuid;
     char name[10];
     int total;
 };
 int main()
{
    struct student s[5];
    int i,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("Enter details:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d%s%d",&s[i].stuid,s[i].name,&s[i].total); 
    }
    
    printf("Details are:\n");
    for(i=0;i<n;i++)
    {
        printf("ID is %d\n",s[i].stuid);
        printf("Name is %s\n",s[i].name);
        printf("Total is %d\n",s[i].total);
    }
    
    return 0;
}
//structure with pointer multiple
#include<stdio.h>
 struct student
 {
     int stuid;
     char name[10];
     int total;
 };
 int main()
{
    struct student s[10],*p;
    int n,i;
      
    printf("Enter number of students: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=&s[i];
    }
    printf("Enter details:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d%s%d",&(p+i)->stuid,&(p+i)->name,&(p+i)->total);  
    }
    
    
    printf("Details are:\n");
    for(i=0;i<n;i++)
    {
      printf("ID is %d\n",(p+i)->stuid);
      printf("Name is %s\n",(p+i)->name);
      printf("Total is %d\n",(p+i)->total);  
    }
    
    
    
    return 0;
}
