//Accept one string from user and check weather it contains vowels in it or not.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

bool ChkVowel(char Fname[])
{
	for(int i=0; Fname[i]!='\0'; i++)
	{
		if((Fname[i]>='a')||(Fname[i]<='e')||(Fname[i]<='i')||(Fname[i]<='o')||(Fname[i]<='u'))
		{
			return true;
		}else if((Fname[i]>='A')||(Fname[i]<='E')||(Fname[i]<='I')||(Fname[i]<='O')||(Fname[i]<='U'))
		{
			return true;
		}
		
	}
	
	
	return false;
}

int main()
{
	char Arr[20];
	bool bRet=false;
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=ChkVowel(Arr);
	
	if(bRet==false)
	{
		printf("FALSE");
	}	
	else
	{
		printf("TRUE");
	}
	
	return 0;
}   