//Write a program to check whether the number is even or odd.

# include <stdio.h>

int CheckEven(int iNo1)
{
		
	if (iNo1%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iValue1=0, iRet=0;
	printf ("Enter first number\n");
	scanf("%d",&iValue1);
	
	iRet=CheckEven(iValue1);
	
	if(iRet==1)
	{
		printf ("Number is Even\n");
	}
	else
	{
		printf ("Number is Odd\n");
	}
	return 0;
}