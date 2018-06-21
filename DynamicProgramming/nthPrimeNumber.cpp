
//problem statement >> https://hack.codingblocks.com/contests/c/452/700

#include<iostream>

using namespace std;
unsigned long long int dp[10000001];
unsigned long long int i,j;
int main(){
    dp[0] = 0;
    dp[1] = 0;
    for(i=2;i<=10000000;i++){
        dp[i] = 1;
    }
    
    for(i=2;i*i<=5000000;i++){
        if(dp[i]==1){
            for(j=2*i;j<=5000000;j+=i){
                dp[j] = 0;
            }
        }
    }
    unsigned long long int count=0;
    unsigned long long int n;
    cin>>n;
    for(i=0;i<=10000000;i++){
        if(dp[i]==1){
            count++;
            if(count==n){
                cout<<i;
                break;
            }
        }

    }
    
    
    
    return 0;
}
