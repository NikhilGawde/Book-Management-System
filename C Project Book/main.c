#include <stdio.h>
#include <stdlib.h>
#include "book.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	printf("\n\t\tWELCOME TO LIBRARY \n\n");
	int dsp;
	int bookCount=0;
	
	
	
	book* b1;
	b1=(book*)malloc(sizeof(book)*bookCount);
	
	
	
	do
	{
		printf("\n	MENU 		");
		printf("\n\n|1.Store Book\t |\n|2.Display Book\t |\n|3.Search Book\t |\n|4.Update Book\t |\n|5.Delete record |\n|6.EXIT\t\t |");
		printf("\n\nEnter choice from menu : ");
		scanf("%d",&dsp);
		
		if(dsp==1)
		{
			storeBook(b1,&bookCount);
		}
		else if(dsp==2)
		{
			if(bookCount==0)
			{
				printf("\n\t----> No book available <----");
			}
			else
			{
				displayBook(b1,bookCount);
			}				
		}
		else if(dsp==3)
		{
			if(bookCount==0)
			{
				printf("\n\t----> No book available <----");
			}
			else
			{
				searchBook(b1,bookCount);
			}				
		}
		else if(dsp==4)
		{
			if(bookCount==0)
			{
				printf("\n\t----> No book available <----");
			}
			else
			{
				update(b1,bookCount);
			}				
		}
		else if(dsp==5)
		{
			if(bookCount==0)
			{
				printf("\n\t----> No book available <----");
			}
			else
			{
				deleteRecord(b1,&bookCount);
			}		
		}
		else
		{
			printf("\n\n\n\t>>>> Thank You <<<<");		
		}		
	}while(dsp!=6);

	free(b1);
}
