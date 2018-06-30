//problem statement >> https://www.geeksforgeeks.org/program-nth-catalan-number/

#include<iostream>
using namespace std;
#define ll long long

int findCatNum(int num,int *dp){
    
    for(int i=2;i<=num;i++){
        for(int j=0;j<i;j++)
        dp[i] += (dp[j]*dp[i-j-1]);
    }
    return dp[num];
}

int main(){
    int n;
    cin>>n;
    int dp[100000];
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<100000;i++)
        dp[i] = 0;
    
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cout<<findCatNum(num+1,dp)<<endl;
    }
    
    
    return 0;
}
