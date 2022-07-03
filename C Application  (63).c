//WAP to accept one string from user and accept one character. Return index of last occurence of that character.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

int Countchar(char Str[], char ch)
{
	int i=0, index=0;
	
	while(Str[i]!='\0')
	{
		if((Str[i]==ch))
		{
			index=i;
		}
		i++;
	}
	
		return index;
	
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
	
	printf("Index of last occurence of character is :%d\n", Ans);
	
	return 0;
}   