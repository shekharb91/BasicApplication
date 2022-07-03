//Accept number of rows and columns from user and display below pattern.

//Input: Rows = 4, Columns =4
//Output:
/*
 
A	B	C	D 
a	b	c	d
A	B	C	D
a	b	c	d

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0, j=0;
	
	char cPrintU='A', cPrintL='a';
	
	for(i=1; i<=iRow; i++)
	{	
		cPrintU='A';
		cPrintL='a';
		
		for(j=1; j<=iCol; j++)
		{
			if(i%2==0)
			{
				printf("%c\t", cPrintL);
				cPrintL++;
			}
			else
			{
				printf("%c\t", cPrintU);
				cPrintU++;
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