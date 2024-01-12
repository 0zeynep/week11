#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name1[100],name2[100],name3[100];
	int i=0,j=0;
	printf("Enter your name");
	gets(name1);
	while(name1[i]!='\0'){
		name3[j]=name1[i];
		i++;
		j++;
	}
	printf("Enter your second name");
	gets(name2);
	i=0;
	while(name2[i]!='\0'){
		name3[j]=name2[i];
		i++;
		j++;
		
}
	printf("\n");
	puts(name3);
	
	return 0;
}
