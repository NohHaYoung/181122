#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100] = "programming course";
	char dst[100];
	
	/*src의 내용을 dst로 옮김*/
	strcpy(dst, src);
	
	printf("%s(%i)\n", dst,	strlen(dst));

	
	return 0;
}
