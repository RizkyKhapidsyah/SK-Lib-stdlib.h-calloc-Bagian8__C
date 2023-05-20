#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	int* p1 = (int*)calloc(5, sizeof(int));
	int* p2 = (int*)calloc(1, sizeof(int[5]));
	int* p3 = (int*)calloc(5, sizeof * p3);

	for (int i = 0; i < 5; i++) {
		printf("p1[%d] = %d\n", i, p1[i]);
	}
		
	free(p1);
	free(p2);
	free(p3);

	_getch();
	return 0;
}