#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(NULL));
    printf("random number generated : %d \n",rand()%100);
    
    return 0;
}
