//#include <stdio.h>
//#include <stdlib.h>
#include "book.h"

void storeBook(book* b,int* bcount)
{
	int i,n;
	printf("\nEnter number of books to store :");
	scanf("%d",&n);
	for(i=*bcount;i<*bcount+n;i++)
	{
		
		printf("\n\t----> Entet details of Book #%d <----\n\n",i+1);
		printf("Enter Book ID      : ");
		scanf("%d",&b[i].bookId);
		fflush(stdin);
		
		printf("Enter Book Name    : ");
		gets(b[i].name);
		
		printf("Enter Author Name  : ");
		gets(b[i].author);
		
		printf("Enter Publication  : ");
		gets(b[i].publication);
		
		printf("Enter Genre        : ");
		gets(b[i].genre);
		
		printf("Enter Pages        : ");
		scanf("%d",&b[i].pages);
		fflush(stdin);
		
		printf("Enter Price        : ");
		scanf("%d",&b[i].price);
		fflush(stdin);
		
		printf("Enter Language     : ");
		gets(b[i].language);
		
		printf("Enter Edition      : ");
		scanf("%d",&b[i].edition);
	}
	*bcount=*bcount+n;
	printf("\n\t----> Available book : %d <----",*bcount);
}

void displayBook(book* b,int bcount)
{
	int i;
	printf("\n\n\t\t\t\t\t\t\t\t\t----> DETAILS OF BOOK <----\n\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	printf("\n   BOOK ID\t   | \tNAME\t\t | \tAUTHOR\t\t |  \tPUBLICATION\t  |  \tGENRE\t\t  |  \tPAGES\t   |  \tPRICE\t    |  \tLANGUAGE\t | \tEDITION\t  \n");
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for(i=0;i<bcount;i++)
	{
		
		printf("#%d)  %-18d %-22s %-25s %-22s %-23s %-15d %-15d %-25s %-10d\n\n",i+1,b[i].bookId,b[i].name,b[i].author,b[i].publication,b[i].genre,b[i].pages,b[i].price,b[i].language,b[i].edition);
	}
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

void searchBook(book* b,int bcount)
{
	int src,i,src1,flag=0;
	char src2[20];
	printf("\n1.Book ID\n2.Book name\n3.Author\n\nEnter to search :");
	scanf("%d",&src);
	
		if(src==1)
		{
			printf("\n\nEnter Book ID to search : ");
			scanf("%d",&src1);
			for(i=0;i<bcount;i++)
			{
				if(src1==b[i].bookId)
				{
					flag=1;
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
					printf("\n   BOOK ID\t   | \tNAME\t\t | \tAUTHOR\t\t |  \tPUBLICATION\t  |  \tGENRE\t\t  |  \tPAGES\t   |  \tPRICE\t    |  \tLANGUAGE\t | \tEDITION\t  \n");
					printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("\n#%d)  %-18d %-22s %-25s %-22s %-23s %-15d %-15d %-25s %-10d\n\n",i+1,b[i].bookId,b[i].name,b[i].author,b[i].publication,b[i].genre,b[i].pages,b[i].price,b[i].language,b[i].edition);
					printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					break;
				}
			}
		}
					
		else if(src==2)
		{
			printf("\n\nEnter Book Name to search :");
			fflush(stdin);
			gets(src2);
			
			for(i=0;i<bcount;i++)
			{
				if(strcmpi(b[i].name,src2)==0)
				{
					flag=1;
					break;				
				}
			}
		}
				
		else if(src==3)
		{
			printf("\n\nEnter Author to search :");
			fflush(stdin);
			gets(src2);
			//scanf("%s",&src1);
			for(i=0;i<bcount;i++)
			{
				if(strcmpi(b[i].author,src2)==0)
				{
					flag=1;
					break;
				}
			}
		}
		else if(src!=1 || src!=2 || src!=3)
		{
			printf("\n\tInvalide input ");
			flag=3;
		}
		if(flag==1)
		{
			printf("\n\t----> Record found <----	");
		}
		else if(flag!=1 && flag!=3)
		{
			printf("\n\t---> Record not found !! <---		");
		}
	printf("\n\n*************************************************");
}

void update(book* b,int bcount)
{
	int i,upd,newId,ch,flag=0;
	
	printf("\n\nEnter Book Id to update : ");
	scanf("%d",&upd);
	for(i=0;i<bcount;i++)
	{
		if(b[i].bookId==upd)
		{
			printf("\nBook Id #%d found",upd);
			printf("\n\n1.Name\n2.Author\n3.Publication\n4.Genre\n5.Price");
			printf("\nEnter choice to update : ");
			scanf("%d",&ch);
			if(ch==1)
			{
				fflush(stdin);
				printf("\nEnter new name of book : ");
				gets(b[i].name);
				printf("\n	--->Update successful<---	\n");
				printf("\n\nNew book name : %s",b[i].name);
				flag=1;
				break;
			}
			else if(ch==2)
			{
				fflush(stdin);
				printf("\nEnter new name of author : ");
				gets(b[i].author);
				printf("\n	--->Update successful<---		\n");
				printf("\n\nNew author name : %s",b[i].author);
				flag=1;
				break;
			}
			else if(ch==3)
			{
				fflush(stdin);
				printf("\nEnter new name of publication : ");
				gets(b[i].publication);
				printf("\n	--->Update successful<---		\n");
				printf("\n\nNew publication name : %s",b[i].publication);
				flag=1;
				break;
			}
			else if(ch==4)
			{
				fflush(stdin);
				printf("\nEnter new genre : ");
				gets(b[i].genre);
				printf("\n	--->Update successful<---		\n");
				printf("\n\nNew genre : %s",b[i].genre);
				flag=1;
				break;
			}
			else if(ch==5)
			{
				fflush(stdin);
				printf("\nEnter new price : ");
				scanf("%d",&b[i].price);
				printf("\n	--->Update successful<---		\n");
				printf("\n\nNew price : %d",b[i].price);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("\n\t----> Book not found !! <----		\n");
	}
	printf("\n\n*************************************************");
}

void deleteRecord(book* b,int* bcount)
{
	int i,del,j,flag=0;
	printf("\n\nEnter Book ID to delete record : ");
	scanf("%d",&del);
	for(i=0;i<*bcount;i++)
	{
		if(b[i].bookId==del)
		{
			flag=1;
			for(j=i;j<*bcount;j++)
			{
				b[j]=b[j+1];
			}
		}
	}
	if(flag==1)
	{
		*bcount=*bcount-1;
		printf("\n\t----> Record deleted successfully <----		");
	}
	else
	{
		printf("\n\t----> Record not found !! <----		");
	}
	printf("\n\n*************************************************");
}

