//WAP to accept one string from user and accept one character. Return frequency of that character.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

int Countchar(char *Str, char ch)
{
	int iCnt=0;
	
	while(*Str!='\0')
	{
		if((*Str==ch))
		{
			iCnt++;
		}
		Str++;
	}
	
		return iCnt;
	
}

int main()
{
	char Arr[20];
	char cValue='\0';
	
	printf("Enter the charcter whose occurence is to find\n");
	scanf("%c",&cValue);
	
	printf("Enter the string\n");
	scanf("%s",Arr);
	
	int Ans=0;
	
	Ans=Countchar(Arr, cValue);
	
	printf("Frequency of character is :%d\n", Ans);
	
	return 0;
}   