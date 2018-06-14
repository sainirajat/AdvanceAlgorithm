//problem link >> https://hack.codingblocks.com/contests/c/452/504
//Naive Approach

#include<iostream>

using namespace std;

int findMax(int *arr,int j,int k){
    int max = INT8_MIN;
    int last = j+k;
    for( ;j<last;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    return max;
        
}


int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<=n-k;j++){
        cout<<findMax(arr,j,k)<<" ";
    }
    
    return 0;
}
