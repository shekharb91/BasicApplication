//Accept one number from user and print that number of * on screen

# include <stdio.h>

void Display(int iNo)
{
	
	
	if (iNo<0)
	{
		iNo=-iNo;
	}
	
	
	while(iNo>=1)
	{
		printf ("*\n");
		iNo--;
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