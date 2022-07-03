//Accept number of rows and columns from user and display below pattern.

//Input: Rows = 4, Columns =4
//Output:
/*
 
1	2	3	4
5	6	7	8
9	10	11	12
13	14	15	16

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
	int i=0, j=0, iCnt=1;
	
	for(i=1; i<=iRow; i++)
	{	
				
		for(j=1; j<=iCol; j++)
		{
			printf("%d\t",iCnt);
			iCnt++;
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