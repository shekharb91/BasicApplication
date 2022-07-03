//WAP to accept one string from user and convert it into upper case.


# include <stdio.h>
# include <string.h>

void struprx(char *Str)
{
	while(*Str!='\0')
	{
		if((*Str>='a')&&(*Str<='z'))
		{
			*Str=*Str-32;
		}
		Str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	struprx(Arr);
	
		
	printf("String in upper case : %s", Arr);
	return 0;
}   