//Accept numbers from user and display below pattern.

//Input: 5
//Output: A B C D E

#include <stdio.h>

int Pattern(int iNo)
{
	int iCnt=0;
	char cCnt='A';
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("%c\t", cCnt);
		cCnt++;
	}
}

int main()
{
	int iValue=0;
	
	printf("Please enter the value\n");
	scanf("%d", &iValue)
	
	Pattern(iValue);
	return 0;
}