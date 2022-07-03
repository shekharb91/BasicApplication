//WAP to accept one string from user and copy the contents of that string into another string by converting all small characters in caital characters.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

void StrUprX(char *Src, char *Dest)
{
		
	while(*Src!='\0')
	{
		if((*Src>='a')&&(*Src<='z'))
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
	
	StrUprX(Arr, Brr);
	
	printf("Copied String  :%s\n", Brr);
	
	return 0;
}   