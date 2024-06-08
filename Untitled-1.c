//largest number using pointer
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p1;
    printf("enter number of elements: ");
    scanf("%d",&n);
    p1=malloc(n*sizeof(int));
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p1+i);
    }
    for(i=0;i<n;i++)
    {
         if(*p1<*(p1+i))
         {
             *p1=*(p1+i);
         }
    }
    printf("The largest element is %d",*p1);
    return 0;
}