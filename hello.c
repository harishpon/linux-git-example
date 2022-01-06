#include <stdio.h>
#include <string.h>

int main() {
	char name[1024];

	printf("hello\n");
	printf("My name is Harish.\n");
	printf("what is your name?  ");
	
	//scan in the name 
	fgets(name, 1024, stdin);
	printf("\n");
	
	//print out output with name
	printf("Hi %s, nice to meet you.", name);
	return 0;
}
//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
