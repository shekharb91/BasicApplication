//Write a recursive progrm which accept number  from user and return largest number.

# include <stdio.h>

int LargestD(int iValue)
{
	static int iMax=0;
	int iDigit= 0;
	
	if(iValue != 0)
	{
		iDigit=iValue%10;
		if(iMax<iDigit)
		{
			iMax=iDigit;
		}
		iValue=iValue/10;
		
		LargestD(iValue);	
	}
	return iMax;
}


int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	iRet=LargestD(iNo);
	
	printf("Largest Digit :%d\n", iRet);
	
	return 0;
}