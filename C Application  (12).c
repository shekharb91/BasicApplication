//Accept one number from user and print factors of that number of on screen and dont consider tha number in factor list.

# include <stdio.h>

void DisplayFact(int iNo);

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	
	scanf("%d", &iValue);
	
	DisplayFact(iValue);
	
	return 0;
}

void DisplayFact(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1; iCnt<=iNo/2  ;iCnt++ )
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}