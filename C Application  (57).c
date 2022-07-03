//WAP to accept one string from user and toggle the case.


# include <stdio.h>
# include <string.h>

void strtogglex(char *Str) 
{
	while(*Str!='\0')
	{
		if((*Str>='a')&&(*Str<='z'))
		{
			*Str=*Str-32;
		}
		else if((*Str>='A')&&(*Str<='Z'))
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
	
	strtogglex(Arr);
	
		
	printf("String toggle case : %s", Arr);
	return 0;
}   