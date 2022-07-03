//Accept one number from user and print that number of * on screen

# include <stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	if (iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf ("*\n");
	}
		
}

int main()
{
	int iValue=0;
	printf ("Enter first number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}