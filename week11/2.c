#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char A[50];
	int i=0;
	gets(A);
	while(A[i]!='\0'){
		if ((A[i]>='a' && A[i]<='z')||(A[i]>='A' && A[i]<='Z'))
		printf("%c",A[i]);
		else{
			printf("");
		}
		i++;	
	}
	
	return 0;
}
