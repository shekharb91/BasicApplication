//WAP to accept one string from user and copy the contents of that string into another string in reverse order.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

void StrRevCpyX(char *Src, char *Dest)
{
	int Strlen=0;	
	while(*Src!='\0')
	{
		Src++;
		Strlen++;
	}
	Src--;
		
	while(Strlen>0)
	{
		*Dest=*Src;
		
		Strlen--;
		Src--;
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
	
	StrRevCpyX(Arr, Brr);
	
	printf("Copied String  :%s\n", Brr);
	
	return 0;
}   