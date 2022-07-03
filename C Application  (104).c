//Write a recursive progrm which accept number from user and return Reverse number.

# include <stdio.h>

int Reverse(int iValue)
{
	static int iNo=0;
	int iDigit= 0;
	
	if(iValue != 0)
	{
		iDigit=iValue%10;
		iNo=iNo*10+iDigit;
		iValue=iValue/10;
		
		Reverse(iValue);	
	}
	return iNo;
}


int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	iRet=Reverse(iNo);
	
	printf("Reverse Number :%d\n", iRet);
	
	return 0;
}