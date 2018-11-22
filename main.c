#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp = NULL;
	char input[100];
	
	fp = fopen("sample.txt", "r");
	
	while( fgets(input, 100, fp) != NULL)
		printf(input);
		
	fclose(fp);
	
	return 0;
}
