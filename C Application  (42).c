//Accept character from user and check whether it is Capital or not.

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
	if(((ch>='A')&&(ch<='Z')))
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
		printf("It is capital\n");
	}
	else
	{
		printf("It is not capital\n");
	}
	return 0;
}