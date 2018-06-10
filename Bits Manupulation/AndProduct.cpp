//problem link --> https://www.hackerrank.com/challenges/and-product/problem

#include<iostream>

using namespace std;

long findAndProduct(long a,long b){
    long ans=a;
    for(long i=a+1;i<b;i++){
        ans &=i;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    long arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    
    for(int j=0;j<n;j++){
        cout<<findAndProduct(arr[j][0],arr[j][1])<<endl;
    }
    
    
    return 0;
}
