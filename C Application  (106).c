//Write application which accepts the file name from user and create that in read mode.


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>


int main()
{
	char fName[20];
	int fd=0;
	printf("Enter the file name which you want to create\n");
	scanf("%s",fName);
	fd =creat(fName, 0777);
	
	if(fd==-1)
	{
		printf("File unable to create\n");
		return -1;
	}
	
	printf("file is created Sucessfully with file name %s and FD %d.\n", fName, fd);
	
	return 0;
}   