//Accept one string from user and count number of small characters in it.


# include <stdio.h>
# include <string.h>

int CountSmall(char Fname[])
{
	int iCnt=0;
	for(int i=0; Fname[i]!='\0'; i++)
	{
		if(Fname[i]>='a' && Fname[i]<='z')
		{
			iCnt++;
		}
	}
	
	
	return iCnt;
}

int main()
{
	char Arr[20];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	int Ans;
	Ans=CountSmall(Arr);
	
		
	printf("No. of small letters : %d", Ans);
	return 0;
}   