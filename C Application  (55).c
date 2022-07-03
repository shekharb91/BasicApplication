//WAP to accept one string from user and convert it into lower case.


# include <stdio.h>
# include <string.h>

void strlwrx(char *Str)
{
	while(*Str!='\0')
	{
		if((*Str>='A')&&(*Str<='Z'))
		{
			*Str=*Str+32;
		}
		Str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	strlwrx(Arr);
	
		
	printf("String in lower case : %s", Arr);
	return 0;
}   