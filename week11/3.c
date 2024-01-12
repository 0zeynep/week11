#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char words[10][20],temporary[20];
	int i,j;
	printf("Enter ten words:\n");
	for (i=0;i<=9;i++){
		gets(words[i]);
		
	}
	for (i=0;i<=9;i++){
		
		for(j=i+1;j<=9;j++){
			if(strcmp(words[i],words[j])> 0){
				strcpy(temporary,words[i]);
				strcpy(words[i],words[j]);
				strcpy(words[j],temporary);
		
		
	}}}
	printf("\nSorted state:\n");
	for(i=0;i<=9;i++){
		printf("%s\n",words[i]);
	}
	
	
	return 0;
}
