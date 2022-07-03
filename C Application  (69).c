//WAP to accept 2 strings from user and concat first string after second string.


# include <stdio.h>
# include <string.h>
# include <stdbool.h>

void StrCatX(char *Src, char *Dest)
{
		
	while(*Src!='\0')
	{
			
		Src++;
		
	}
	
	*Src=' ';
	Src++;
	
	while(*Dest!='\0')
	{
		*Src=*Dest;
		
		Src++;
		Dest++;
		
	}
	
	*Src='\0';
	
}

int main()
{
	char Arr[30];
	char Brr[10];
	
	printf("Enter the first string\n");
	scanf("%s",Arr);
	
	printf("Enter the second string\n");
	scanf("%s",Brr);
	
	StrCatX(Arr, Brr);
	
	printf("Concat String  :%s\n", Arr);
	
	return 0;
}   