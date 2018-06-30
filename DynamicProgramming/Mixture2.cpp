//problem statement >>https://hack.codingblocks.com/contests/c/452/1069
//all wrong ans
#include<iostream>
#include<algorithm>
using namespace std;



long long sum(int *arr,int i,int j){
    long long ans = 0;
    for(int k=i;k<=j;k++){
        ans +=arr[k];
        ans%=100;
    }
    return ans%100;
}

long long smoke(int *arr,int i,int j,long long dp[][1000]){
    if(i==j||i>j){
        return 0;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    dp[i][j] = INT_MAX;
    for(int k=i;k<=j;k++){
        dp[i][j] = min(dp[i][j],smoke(arr,i,k,dp)+smoke(arr,k+1,j,dp)+(sum(arr,i,k)*sum(arr,k+1,j)));
        
        }
    return dp[i][j];
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    long long dp[1000][1000];
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            dp[i][j] = -1;
        }
    }

    cout<<smoke(arr,0,n-1,dp);
    
    return 0;
}
//3
//40 60 20
//2400

