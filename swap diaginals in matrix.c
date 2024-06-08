//interchange diagonals
#include<stdio.h> 
int main()
{
	int row, col;
  
	label1: 
	printf("\n Enter Number of rows and columns  :  ");
	scanf("%d %d", &row,&col);
 
	// Check if it is a square matrix or not
	if(row != col)
	{
		printf("\n Please Enter a Square Matrix !!!" );
		goto label1;
	}

	int arr[row][col], temp;
	printf("\n Enter the Matrix Elements \n");
	// Nested loop to input array elements from the user
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
  	
	// Code to swap the diagonals 
	for(int i=0;i<row;i++)
	{
	    for (int j=0;j<col;j++)
	    {
	        temp = arr[i][j];
		arr[i][j] = arr[i][row - i - 1];
		arr[i][row - i - 1] = temp;
	    }
	}
     	
	printf("\n Matrix after Interchanging Diagonals are: \n");
	// Nested loop to print the matrix after intercganing the diagonals 
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf(" %d  ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
