#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100] = "programming course";
	char dst[100];
	char str[100];
	int i;
	/*src�� ������ str�� �ű�*/
	
	while( src[i] != '\0'){
		str[i] = src[i];
		i++;
	} 
	str[i] = '\0';
	
	printf("%s\n", str);
	
	/*src�� ������ dst�� �ű�*/
	strcpy(dst, src);
	
	printf("%s(%i)\n", dst,	strlen(dst));

	
	return 0;
}
