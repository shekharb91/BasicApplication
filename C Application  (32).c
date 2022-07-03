//Accept number of rows and columns from user and display below pattern.

//Input: Rows = 3, Columns =4
//Output:
/*
 
A	A	A	A 
B	B	B	B
C	C	C	C

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0, j=0;
	
	char cPrintU='A';
	
	for(i=1; i<=iRow; i++)
	{	
				
		for(j=1; j<=iCol; j++)
		{
			printf("%c\t", cPrintU);
			
		}
		printf("\n");
		cPrintU++;
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