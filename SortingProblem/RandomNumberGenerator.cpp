#include<iostream>
#include<ctime>

using namespace std;

int main(){
    //to get different number every time
    srand(time(NULL));
    cout<<rand()%100;
    
    //to get same number every time
    srand(1);
    
    return 0;
}
