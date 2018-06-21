//problem link >> https://hack.codingblocks.com/contests/c/452/760

//constraints: 1<=m<=n<=1000000000
//2 run time error
#include<iostream>

using namespace std;
unsigned long long int dp[100000001];
unsigned long long int i,j;
int main(){
    dp[0] = 0;
    dp[1] = 0;
    for(i=2;i<=100000000;i++){
        dp[i] = 1;
    }
    
    for(i=2;i*i<=100000000;i++){
        if(dp[i]==1){
            for(j=2*i;j<=100000000;j+=i){
                dp[j] = 0;
            }
        }
    }
    int n;
    cin>>n;
    for(int p=0;p<n;p++){
        
        cin>>i>>j;
        for( ;i<=j;i++){
            if(dp[i]==1){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}


