//Accept character from user and check whether it is small case or not.

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
	if(((ch>='a')&&(ch<='z')))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	char cValue='\0';
	bool bRet=false;
	
	printf("Please enter the character\n");
	scanf("%c", &cValue);
	
	bRet=ChkCapital(cValue);
	if(bRet==true)
	{
		printf("It is small case\n");
	}
	else
	{
		printf("It is not small case\n");
	}
	return 0;
}