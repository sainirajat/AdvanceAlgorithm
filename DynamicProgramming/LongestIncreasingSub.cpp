#include<iostream>
using namespace std;

int findLongestSub(int *arr,int *dp,int n,int i){
    if(i==0)
        return 1;
    if(dp[i]!=1)
        return dp[i];
    if(arr[i]>=arr[i-1])
        dp[i] = 1+findLongestSub(arr,dp,n,i-1);
    else
        dp[i] = findLongestSub(arr,dp,n,i-1);
    return dp[i];
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //    int dp[n] = {0};
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i] = 1;
    
    int temp = findLongestSub(arr,dp,n,n-1);
    
    int ans = 1;
    for(int j=0;j<n;j++){
        if(dp[j]>ans)
            ans=dp[j];
    }
    cout<<ans<<endl;
    return 0;
}
