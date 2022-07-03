//WAP to accept one string from user and count nuber of white spaces.


# include <stdio.h>
# include <string.h>

int DisplayDigit(char *Str) 
{
	int iCnt=0;
	while(*Str!='\0')
	{
		if((*Str==' '))
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
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	int Ans=DisplayDigit(Arr);
	
	printf("No. of white spaces : %d", Ans);
	
	return 0;
}   