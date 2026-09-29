#include <stdio.h>
#include <time.h> 
#include <stdlib.h>


int total()
{
    if (x1 = x2 = x3){
        printf("BIG WIN!!!\n");
    }
    else{
        printf("Lose\n");
    }
    
    
}


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
int random_() {
	srand((unsigned)time(NULL));
	threenumbers nums = random();
	int x1 = nums.x1;
	int x2 = nums.x2;
	int x3 = nums.x3;
	return x1, x2, x3;
	
}


int main(){
    int bank;
    scanf("enter the desired amount: %d", &bank);
    int x1, x2, x3 = random();
    total();
	return 0;

}