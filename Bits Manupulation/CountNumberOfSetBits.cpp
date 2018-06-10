#include<iostream>

using namespace std;

int CountSetBits(int num){
    int count=0;
    while(num){
        count++;
        num = (num&(num-1));
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<CountSetBits(n);
    return 0;
}
