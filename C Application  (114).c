//Write application which accepts the file name and one number from user and read that number of characters from starting position.


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

void DisplayN(char Fname[], int no)
{
	int fd=0, iRet=0, iCnt=0;
	char Data[no];
	
	fd =open(Fname, O_RDONLY);
	
	if(fd==-1)
	{
		printf("File unable to open\n");
		
	}
	
	printf("file is opened Sucessfully.\n");
	
	read(fd,Data,sizeof(Data));
	write(1,Data,no);
	close(fd);
}

int main()
{
	char fName[20];
	int no;
	
	printf("Enter the file name which you want to open\n");
	scanf("%s",fName);
	
	printf("Enter the number\n");
	scanf("%d",&no);
	
	DisplayN(fName, no);
	
	return 0;
}   