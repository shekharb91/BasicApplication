//Write a recursive progrm which accept number from user and return Smallest number.

# include <stdio.h>

int SmallestD(int iValue)
{
	static int iMin=9;
	int iDigit= 0;
	
	if(iValue != 0)
	{
		iDigit=iValue%10;
		if(iMin>iDigit)
		{
			iMin=iDigit;
		}
		iValue=iValue/10;
		
		SmallestD(iValue);	
	}
	return iMin;
}


int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	iRet=SmallestD(iNo);
	
	printf("Smallest Digit :%d\n", iRet);
	
	return 0;
}