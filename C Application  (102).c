//Write a recursive progrm which accept string from user and return number of small characters.

# include <stdio.h>

int Small(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		
		str++;
		Small(str);		
	}
	return iCnt;
}


int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Small(Arr);
	
	printf("No. of small characters :%d\n", iRet);
	
	return 0;
}