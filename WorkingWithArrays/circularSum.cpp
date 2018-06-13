// problem link >> https://hack.codingblocks.com/contests/c/452/1288

#include<iostream>

using namespace std;

int findSimpleSum(int* arr,int n){
    int currentSum = 0;
    int MaxSum = 0;
    
    for(int i=0;i<n;i++){
        currentSum += arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        if(currentSum>MaxSum){
            MaxSum = currentSum;
        }
    }
    
    return MaxSum;
}

int findCircularSum(int* arr,int n){
    return 0;
}

int findMaxSum(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int simpleSum;
    int circularSum;
    simpleSum = findSimpleSum(arr,n);
    circularSum = findCircularSum(arr,n);
    
    if(simpleSum>circularSum){
        return simpleSum;
    }
    else{
        return circularSum;
    }
}


int main(){
    int n;
    cin>>n;
    
    int ans[n];
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        ans[i] = findMaxSum(size);
    }
    
    for(int j=0;j<n;j++){
        cout<<ans[j]<<endl;
    }
    
    return 0;
}
