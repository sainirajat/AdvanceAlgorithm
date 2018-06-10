//problem link vhttps://www.hackerrank.com/challenges/the-great-xor/problem

#include<iostream>

using namespace std;

long findGreatXOR(long num){
    long count=0;
    for(long i=1;i<num;i++){
        if((num^i)>num){
            count++;
        }
    }
    
    return count;
}


int main(){
    int n;
    cin>>n;
    
    long arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cout<<findGreatXOR(arr[j])<<endl;
    }
    
    return 0;
}
