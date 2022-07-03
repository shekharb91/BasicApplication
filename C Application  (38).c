//Consider below code snippet to solve given problem statement.

# include <stdio.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;
struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int SearchFirstOcc(PNODE head, int no);
int SearchLastOcc(PNODE head, int no);
int Addition (PNODE head);
int Maximum(PNODE head);
int Minimum(PNODE head);

void InsertFirst(PPNODE head, int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}



int main()
{
	PNODE first = NULL;
	int iRet=0;
	
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	InsertFirst(&first, 1);
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	InsertFirst(&first, 1);	
	
	//call all functions for below problem statements.
	iRet=SearchFirstOcc(first,51);
	printf("\nThe First occurence of no 51 in linked list is at: %d",iRet);
	
	iRet=SearchLastOcc(first,51);
	printf("\nThe Last occurence of no 51 in linked list is at: %d",iRet);
	
	iRet=Addition(first);
	printf("\nThe Addiion of all elements in linked list is : %d",iRet);
	
	iRet=Maximum(first);
	printf("\nThe Largest element in all elements of linked list is : %d",iRet);
	
	iRet=Minimum(first);
	printf("\nThe Smallest element in all elements of linked list is : %d",iRet);
	
	return 0;
}

/*
1. write program which search first occurance of a particular element from singly linear linked list.
Function should return position at which no is found.
*/

int SearchFirstOcc (PNODE head, int no)
{
	int iCnt=0;
	BOOL bflag=FALSE;
	while(head!=NULL)
	{
		iCnt++;
		if(head->data==no)
		{
			bflag=TRUE;
			break;
		}
		head=head->next;
	}
	if(bflag==TRUE)
	{
		return iCnt;
	}
	else
	{
		return -1;
	}
}
/*

2. write program which search last occurance of a particular element from singly linear linked list.
Function should return position at which no is found.

*/
int SearchLastOcc (PNODE head, int no)
{
	int iCnt=0, iAns=0;
	BOOL bflag=FALSE;
	while(head!=NULL)
	{
		iCnt++;
		if(head->data==no)
		{
			bflag=TRUE;
			iAns=iCnt;
		}
		head=head->next;
	}
	if(bflag==TRUE)
	{
		return iAns;
	}
	else
	{
		return -1;
	}
}
/*

3. write program which returns addition of all elements from singly linear linked list.

*/
int Addition (PNODE head)
{
	int iAns=0;
	
	while(head!=NULL)
	{
		iAns=iAns+(head->data);
		
		head=head->next;
	}
	return iAns;
}
/*

4. write program which returns largest no from all elements from singly linear linked list.

*/

int Maximum(PNODE head)
{
	int Max=head->data;
	while(head!=NULL)
	{
		if(Max<(head->data))
		{
			Max=(head->data);
		}
		head=head->next;
	}
	return Max;
}

/*

5. write program which returns smallest no from all elements from singly linear linked list.

*/

int Minimum(PNODE head)
{
	int Min=head->data;
	while(head!=NULL)
	{
		if(Min>(head->data))
		{
			Min=(head->data);
		}
		head=head->next;
	}
	return Min;
}
