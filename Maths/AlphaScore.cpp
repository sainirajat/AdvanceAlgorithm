//problem statment at >> https://hack.codingblocks.com/contests/c/452/299

#include<iostream>
using namespace std;
#define ll long long


void precomputation(ll *arr,ll *dp,int n){
    for(int i=0;i<n;i++){
        dp[i] = 0;
        for(int j=0;j<=i;j++){
            if(arr[i]>arr[j])
                dp[i]+=arr[j];
        }
    }
}


int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll dp[n];
    precomputation(arr,dp,n);
    
    ll ans = 0;
    for(int i=0;i<n;i++){
//        cout<<dp[i]<<" ";
        ans += dp[i];
    }
    cout<<ans<<endl;
    return 0;
}
