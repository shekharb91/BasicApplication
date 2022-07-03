//WAP to accept one string from user and accept one character. Check whether that character is present in string or not.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

bool Chkchar(char *Str, char ch)
{
	bool bflag =false;
	
	while(*Str!='\0')
	{
		if((*Str==ch))
		{
			bflag =true;
			break;
		}
		Str++;
	}
	if(bflag ==true)
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
	char Arr[20];
	char cValue='\0';
	
	printf("Enter the charcter whose occurence is to find\n");
	scanf("%c",&cValue);
	
	printf("Enter the string\n");
	scanf("%s",Arr);
	
	Chkchar(Arr, cValue);
	
	bool bret;
	
	if(bret==true)
	{
		printf("Character is present\n");
	}
	else
	{
		printf("Character is not present\n");
	}
	return 0;
}   