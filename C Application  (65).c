//WAP to accept one string from user and copy the contents of that string into another string.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

void StrCpyX(char *Src, char *Dest)
{
		
	while(*Src!='\0')
	{
		*Dest=*Src;
		
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
	scanf("%s",Arr);
	
	StrCpyX(Arr, Brr);
	
	printf("Copied String  :%s\n", Brr);
	
	return 0;
}   