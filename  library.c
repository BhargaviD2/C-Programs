#include<stdio.h>
int main()
{
    int n,fine;
    printf("Enter the number of days member is late to return the book: ");
    scanf("%d",&n);
    if(n<0<=5)
    {
        fine=5*n;
        printf("Fine for delayed return is %d",fine);
    }
    else if(5<n<=10)
    {
        fine=10*n;
        printf("Fine for delayed return is %d",fine);
    }
    else if(10<n<=30)
    {
        fine=15*n;
        printf("Fine for delayed return is %d",fine);
    }
    else
    {
        printf("Membership cancelled!")
    }
    return 0;
}

