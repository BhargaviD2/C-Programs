/*
//Lower triangle sum in matrix
#include<stdio.h>
int main()
{
    int i,j,a[50][50],n,b,d1=0;
    printf("Enter the size of matrix: \n");
    scanf("%d",&n);
    printf("Enter the elements in the matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Row %d , Col %d = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             if(i>=j)
             {
                d1+=a[i][j];
             }
        }
    }   
    printf("The sum is %d",d1);
    return 0;   
}



//Transpose of matrix
 #include<stdio.h>
int main()
{
    int i,j,a[50][50],transpose[50][50],n;
    printf("Enter the size of matrix: \n");
    scanf("%d",&n);
    printf("Enter the elements in the matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Row %d , Col %d = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[i][j]=a[j][i];
            printf("%d\t",transpose[i][j]);
            if(j==n-1)//so that for evry new row next line is used
            printf("\n");
        }
    }
    return 0;
}
*/

//Determinant of matrix
#include<stdio.h>
int main()
{
    int i,j,a[50][50],n,A;
    printf("Enter the size of matrix: \n");
    scanf("%d",&n);
    printf("Enter the elements in the matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Row %d , Col %d = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            A=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
            
        }
    }
    printf("The determinant of given matrix is %d",A);
    return 0;
}
