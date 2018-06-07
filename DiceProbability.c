#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIDES 6
#define R_SIDE (rand()%SIDES+1)


int main (int argc, char**argv){
	srand(clock());
	int trials;
	printf("\nEnter number of trials:");
	scanf("%d", &trials);
	int j;
	int d1;
	int d2;
	int outcomes[trials];
	for(j=0;j<trials;j++)
		outcomes[(d1=R_SIDE)+(d2=R_SIDE)]++;
	printf("probability\n");
	int n_dice=2;
	for(j=2;j<n_dice*SIDES+1;++j)
		printf("j=%d p=%lf\n",j);
	(double)(outcomes[j]/trials);
}