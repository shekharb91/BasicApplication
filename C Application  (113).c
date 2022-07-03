//Write application which accepts the file name and one character from user and count number of occurences of that charcters from that file.

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

int CountChar(char Fname[], char c )
{
	int fd=0, iRet=0, iCnt=0;
	char Data[1024];
	
	fd =open(Fname, O_RDONLY);
	
	if(fd==-1)
	{
		printf("File unable to open\n");
		return -1;
	}
	
	printf("file is opened Sucessfully.\n");
	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		for(int i=0; i<iRet; i++)
		{
			if(Data[i]==c)
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;
}

int main()
{
	char fName[20];
	char cValue='\0';
	
	printf("Enter the charcter whose occurence is to find\n");
	scanf("%c",&cValue);
	
	printf("Enter the file name which you want to open\n");
	scanf("%s",fName);
		
	 
	int Ans;
	Ans=CountChar(fName, cValue);
	
		
	printf("No. of occurences of letter %c is : %d", cValue, Ans);
	return 0;
}   