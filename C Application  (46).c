//Accept character from user. If character is Capital display its corresponding small case and if character is small display its corresponding capital character.

#include <stdio.h>


void Display(char ch)
{
	if(((ch>='A')&&(ch<='Z')))
	{
		printf("%c",ch+32);
	}
	else if (((ch>='a')&&(ch<='z')))
	{
		printf("%c",ch-32);
	}
	else
	{
		printf("%c",ch);
	}
}

int main()
{
	char cValue='\0';
		
	printf("Please enter the character\n");
	scanf("%c", &cValue);
	
	Display(cValue);
	
	return 0;
}