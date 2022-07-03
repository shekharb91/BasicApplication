//Accept number of rows and columns from user and display below pattern.

//Input: Rows = 4, Columns =4
//Output:
/*
 
2	4	6	8
1	3	5	7
2	4	6	8
1	3	5	7

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0, j=0;
		
	for(i=1; i<=iRow; i++)
	{	
		for(j=1; j<=iCol; j++)
		{
			if(i%2==0)
			{
				printf("%d\t", 2*j-1);
			}
			else
			{
				printf("%d\t", 2*j);
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0, iValue2=0;
	
	printf("Please enter the row value\n");
	scanf("%d", &iValue1);
	
	printf("Please enter the column value\n");
	scanf("%d", &iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}