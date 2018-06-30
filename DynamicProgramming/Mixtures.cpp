//problem statement >>https://hack.codingblocks.com/contests/c/452/1069

#include<iostream>
using namespace std;

int sum(int *arr,int i,int j){
    int ans = 0;
    for(int k=i;k<=j;k++)
        ans +=arr[k];
    return ans%100;
}

int smoke(int *arr,int i,int j,int dp[][100]){
    if(i==j||i>j){
        return 0;
    }
    
    int finalAns = INT_MAX;
    for(int k=i;k<j;k++){
        int firstPart = smoke(arr,i,k,dp);
        int secondPart = smoke(arr,k+1,j,dp);
        int totalSmoke = firstPart + secondPart + (sum(arr,i,k)*sum(arr,k+1,j));
        finalAns = min(finalAns,totalSmoke);
    }
    return finalAns;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dp[100][100];
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            dp[i][j] = -1;
        }
    }
    
    cout<<smoke(arr,0,n-1,dp);
    
    return 0;
}
