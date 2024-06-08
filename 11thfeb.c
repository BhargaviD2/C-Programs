//sort n names
#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter number of names :");
   scanf("%d",&n);
   printf("Enter names in any order:");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("The sorted order of names are:");
   for(i=0;i<n;i++){
      printf("%s",str[i]);
   }
   return 0;
}
//sum of right upper traingle in matrix
#include<stdio.h>
int main()
{
    int i,j,n,sum=0,a[50][50];
    printf("Enter the size of matrix: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Row %d, Column %d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            sum+=a[i][j];
        }
    }
    printf("The sum of upper right triangle is %d",sum);
    return 0;
    
}
//swap two numbers using pointer
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two numbwes: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swap, %d and %d",a,b);//swap the numbers in their address itself
}
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

/////
#include<stdio.h>
int main()
{
    char operation;
    double n1,n2;
    printf("Enter an operation +,-,*,/: \n");
    scanf("%c",&operation);
    printf("Enter the numbers: ");
    scanf("%lf%lf",&n1,&n2);
    switch(operation)
    {
        case '+':
            printf("%lf + %lf = %lf",n1,n2,n1+n2);
            break;
        case '-':
            printf("%lf - %lf = %lf",n1,n2,n1-n2);
            break;
        case '*':
            printf("%lf * %lf = %lf",n1,n2,n1*n2);
            break;
        case '/':
            printf("%lf / %lf = %lf",n1,n2,n1/n2);
            break;
        default:
             printf("This does not exist");
    }
    return 0;
}
///vowels and consonants
#include<stdio.h>
int main()
{
    char C;
    int U_vowels,L_vowels;
    printf("Enter a character: ");
    scanf("%c",&C);
    U_vowels = (C=='A'|| C=='E'|| C=='I' || C=='O' || C=='U');
    L_vowels = (C=='a' || C=='e' || C=='i' || C=='o' || C=='u');
    if(U_vowels||L_vowels)
    printf("It is vowel");
    else
    printf("Its a consonant");
    return 0; 

}
