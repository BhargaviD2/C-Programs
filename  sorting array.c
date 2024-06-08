
//sorting array numbers in ascending order
#include<stdio.h>
int main()
{
    int a,n,i,j,number[30];
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&number[30]);
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(number[i]>number[j])
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
        }
    }
    printf("the numbers arranged in ascending order are:\n");
    for (i=0;i<n;i++)
        printf("%d\n",number[30]);

}

