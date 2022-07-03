//Write a recursive progrm which accept number  from user and return summation of digits.

# include <stdio.h>

int Sum(int iValue)
{
	static int iSum=0;
	int iDigit= 0;
	
	if(iValue != 0)
	{
		iDigit=iValue%10;
		iSum=iSum+iDigit;
		iValue=iValue/10;
		
		Sum(iValue);	
	}
	return iSum;
}


int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	iRet=Sum(iNo);
	
	printf("Summation of Digits :%d\n", iRet);
	
	return 0;
}