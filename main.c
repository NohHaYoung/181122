#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fpr = NULL;
	FILE *fpw = NULL;
	
	char input;
	char original[100];
	char copy[100];
	int i=0;
	

	printf("original file name : ");
	scanf("%s", &original);
	printf("copy file : ");
	scanf("%s", copy);
	
	fpr = fopen(original, "r");
	fpw = fopen(copy, "w");
	
	while( (input = fgetc(fpr)) != EOF){
		fputc(input, fpw);
		i++;
	}
	
	printf("Copy succeed! (%i Byte copied)\n", i);
	
	fclose(fpr);
	fclose(fpw);
	
	return 0;
}
