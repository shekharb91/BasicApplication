//WAP to accept one string from user and copy capital characters of that string into another string.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

void StrCpyCap(char *Src, char *Dest)
{
		
	while(*Src!='\0')
	{
		if((*Src>='A')&&(*Src<='Z'))
		{
			*Dest=*Src;
			Dest++;
		}
		
		Src++;
		
	}
	*Dest='\0';
	
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter the string\n");
	scanf("%s",Arr);
	
	StrCpyCap(Arr, Brr);
	
	printf("Capital Char String  :%s\n", Brr);
	
	return 0;
}   