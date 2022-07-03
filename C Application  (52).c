//Accept one string from user and return diffrence between frequency of small and capital characters.


# include <stdio.h>
# include <string.h>

int Diffrence(char Fname[])
{
	int iCntS=0, iCntC=0;
	for(int i=0; Fname[i]!='\0'; i++)
	{
		if(Fname[i]>='a' && Fname[i]<='z')
		{
			iCntS++;
		}
		if(Fname[i]>='A' && Fname[i]<='Z')
		{
			iCntC++;
		}
	}
	
	
	return iCntS-iCntC;
}

int main()
{
	char Arr[20];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	int Ans;
	Ans=Diffrence(Arr);
	
		
	printf("Diffrence between frequency of small and Capital letters : %d", Ans);
	return 0;
}   