//problem link >> https://hack.codingblocks.com/contests/c/452/1239

#include<iostream>
using namespace std;
#define ll long long int

bool findSum(int* arr,int i,ll sum,bool* dp){
    if(sum==0)
        return true;
    if(i<0)
        return false;
    if(dp[i]==true)
        return true;
    
    dp[i] = findSum(arr,i-1,sum-arr[i],dp)+findSum(arr,i-1,sum,dp);
    
    return dp[i];
    
}

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        ll sum;
        cin>>n>>sum;
        
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        bool dp[n];
        for(int i=0;i<n;i++)
            dp[i] = false;
        
        bool isThereAset = findSum(arr,n-1,sum,dp);
        if(isThereAset)
            cout<<"Yes";
        else
            cout<<"NO";
    }
    return 0;
}

