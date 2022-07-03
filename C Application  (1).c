//Program to divide two numbers

# include <stdio.h>

int Divide(int iNo1, int iNo2 )
{
	int iAns=0;
	
	if (iNo2==-iNo1)
	{
		return -1;
	}
	
	iAns=iNo1/iNo2;
	
	return iAns;	
	
}

int main()
{
	int iValue1=0, iValue2=0, iRet=0;
	printf ("Enter first number\n");
	scanf("%d",&iValue1);
	printf ("Enter second number\n");
	scanf("%d",&iValue2);
	
	iRet=Divide(iValue1,iValue2);
	printf ("Division:%d\n", iRet);
	
	return 0;
}