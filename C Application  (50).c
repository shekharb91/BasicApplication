//Accept one string from user and count number of capital characters in it.


# include <stdio.h>
# include <string.h>

int CountCapital(char Fname[])
{
	int iCnt=0;
	for(int i=0; Fname[i]!='\0'; i++)
	{
		if(Fname[i]>='A' && Fname[i]<='Z')
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
	Ans=CountCapital(Arr);
	
		
	printf("No. of capital letters : %d", Ans);
	return 0;
}   