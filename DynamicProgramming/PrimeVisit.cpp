//problem statement at >> https://hack.codingblocks.com/contests/c/452/63

//using Seive Of Eratosthenes

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    int dp[1000001];
    dp[0] = 0;
    dp[1] = 0;
    for(int i=2;i<=1000000;i++){
        dp[i] = 1;
    }
    
    for(int i=2;i*i<=1000000;i++){
        if(dp[i]==1){
            for(int j=2*i;j<=1000000;j+=i){
                dp[j] = 0;
            }
        }
    }
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int count=0;
        for(int j=a;j<=b;j++){
            if(dp[j]==1){
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    
    
    return 0;
}














