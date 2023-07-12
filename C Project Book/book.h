#include <stdio.h>
#include <stdlib.h>

typedef struct book
{
	int  bookId;
	char name[20];
	char author[20];
	char publication[20];
	char genre[20];
	int  pages;
	int  price;
	char language[20];
	int  edition;
}book;

void storeBook(book*,int*);
void displayBook(book*,int);
void searchBook(book*,int);
void update(book*,int);
void deleteRecord(book*,int*);

