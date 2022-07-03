//Write a recursive progrm which accept number from user and return its factorial

# include <stdio.h>

int Factorial(int iNo)
{
	static int iFact=1;
	if(iNo!=0)
	{
		iFact=iFact*iNo;		
		iNo--;
		
		Factorial(iNo);		
	}
	return iFact;
}


int main()
{
	int iRet=0, iNo=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	iRet=Factorial(iNo);
	
	printf("Factorial :%d\n", iRet);
		
	return 0;
}