//Accept character from user and check whether it is alphabet or not.

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
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
	
	bRet=ChkAlpha(cValue);
	if(bRet==true)
	{
		printf("It is character\n");
	}
	else
	{
		printf("It is not character\n");
	}
	return 0;
}