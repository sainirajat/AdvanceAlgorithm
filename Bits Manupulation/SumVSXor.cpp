//problem at link -- https://www.hackerrank.com/challenges/sum-vs-xor/problem

#include <iostream>

using namespace std;

long findMatch(long n){
    long i;
    long count = 0;
    
    for(i=0;i<n;i++){
        if((i^n)==(i+n)){
            count++;
        }
    }
    
    return count;
    
}

int main(){
    
    long n;
    cin>>n;
    cout<<findMatch(n);
    
    return 0;
}
