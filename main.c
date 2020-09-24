#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int min,sec;
	printf("input the second :");
	scanf("%i", &sec);
	
	min = sec/60;
	
	printf("the time is %i : %i",min,sec%60);
	
	return 0;
}
