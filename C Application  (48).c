//Accept character from user. If character is Capital, display all the characters from input character till z and if character is small,display all characters from input character in reverse order till a.

#include <stdio.h>


void Display(char ch)
{
	if(((ch>='A')&&(ch<='Z')))
	{
		for(char i=ch; ch<='Z'; ch++)
		{
			printf("%c\t",ch);
		}
	}
	else if (((ch>='a')&&(ch<='z')))
	{
		for(char i=ch; ch>='a'; ch--)
		{
			printf("%c\t",ch);
		}
	}
	else
	{
		return;
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