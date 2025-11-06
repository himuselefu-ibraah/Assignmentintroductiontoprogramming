/*Christopher Nyasimba 
PA106/G/29043/25
This program prompts the user to enter the title of book borrowed and is stpored
in a file borrowed_books*/ 




#include<stdio.h>

int main (){
	char book_name[50];
	FILE *fptr;
	
	fptr=fopen( "C:\\Users\\hp\\Downloads\\borrowed_books.txt","a");
	printf("Enter title of the book borrowed:\n");
	scanf("%s",book_name);
	
	fprintf( fptr,"The librarian entered book name:%s\n",book_name);
	
	fclose(fptr);
	
	printf("The result has been stored in borrowed_books.txt.\n");
	
	return 0;
}
