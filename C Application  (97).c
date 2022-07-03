//Write a recursive progrm which accept string from user and return number of characters.

# include <stdio.h>

int Strlen(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		
			iCnt++;
		
		str++;
		Strlen(str);		
	}
	return iCnt;
}


int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Strlen(Arr);
	
	printf("No. of characters :%d\n", iRet);
	
	return 0;
}