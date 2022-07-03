//Write a recursive progrm which accept number  from user and return product of digits.

# include <stdio.h>

int Product(int iValue)
{
	static int iProduct=1;
	int iDigit= 0;
	
	if(iValue != 0)
	{
		iDigit=iValue%10;
		iProduct=iProduct*iDigit;
		iValue=iValue/10;
		
		Product(iValue);	
	}
	return iProduct;
}


int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	iRet=Product(iNo);
	
	printf("Product of Digits :%d\n", iRet);
	
	return 0;
}