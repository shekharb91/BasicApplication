// Accept one number from user and check whether is it divisble by 5 or not.

# include <stdio.h>

void Check (int iNo)
{
	if(iNo%5==0)
	{
		printf("Number is divisible by 5\n");
	}
	else
	{
		printf("Number is not divisible by 5\n");
	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	Check (iValue);
	
	return 0;
}