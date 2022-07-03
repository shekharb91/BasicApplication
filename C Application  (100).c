//Write a recursive progrm which accept string from user and count white spaces.

# include <stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		
		str++;
		WhiteSpace(str);		
	}
	return iCnt;
}


int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=WhiteSpace(Arr);
	
	printf("No. of white spaces :%d\n", iRet);
	
	return 0;
}