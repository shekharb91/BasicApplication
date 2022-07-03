//WAP to accept one string from user and copy the contents of that string into another string by toggling the case.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

void StrLwrX(char *Src, char *Dest)
{
		
	while(*Src!='\0')
	{
		if((*Src>='A')&&(*Src<='Z'))
		{
			*Dest=*Src+32;
		}
		else if((*Src>='a')&&(*Src<='z'))
		{
			*Dest=*Src-32;
			
		}
		else
		{
			*Dest=*Src;
		}
		
		Src++;
		Dest++;
		
	}
	*Dest='\0';
	
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	StrLwrX(Arr, Brr);
	
	printf("Copied String  :%s\n", Brr);
	
	return 0;
}   