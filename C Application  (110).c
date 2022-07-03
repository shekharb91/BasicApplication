//Write application which accepts the file name from user and count number of capital characters in it.


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

# define FILESIZE 1024

int CountCapital(char Fname[])
{
	int fd=0, iRet=0, iCnt=0;
	char Data[FILESIZE];
	
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
			if(Data[i]>='A' && Data[i]<='Z')
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
	
	printf("Enter the file name which you want to open\n");
	scanf("%s",fName);
	
	int Ans;
	Ans=CountCapital(fName);
	
		
	printf("No. of capital letters : %d", Ans);
	return 0;
}   