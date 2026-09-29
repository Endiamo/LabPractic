#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

typedef struct {
	int x1;
	int x2;
	int x3;
} threenumbers;

threenumbers random(void){
	threenumbers r;
	r.x1 = rand() % 10 + 1;
	r.x2 = rand() % 10 + 1;
	r.x3 = rand() % 10 + 1;
	return r;
}
int main(void) {
	srand((unsigned)time(NULL));
	threenumbers nums = random();
	int x1 = nums.x1;
	int x2 = nums.x2;
	int x3 = nums.x3;
	printf("%d, %d, %d");
	return 0
}
