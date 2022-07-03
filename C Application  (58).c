//WAP to accept one string from user and display only digits from string.


# include <stdio.h>
# include <string.h>

void DisplayDigit(char *Str) 
{
	while(*Str!='\0')
	{
		if((*Str>='0')&&(*Str<='9'))
		{
			printf("%c",*Str);
		}
		
		Str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	DisplayDigit(Arr);
	
	return 0;
}   