//problem >> https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

#include<iostream>
using namespace std;

int fib(int num,int *dp){
    if(dp[num]!=0)
        return dp[num];
    dp[num] = fib(num-1,dp) + fib(num-2,dp);
    return dp[num];
}


int main(){
    //number of test cases
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        int dp[100000];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for(int i=3;i<100000;i++)
            dp[i] = 0;
        
        cout<<fib(num,dp)<<endl;
    }
    
    
    return 0;
}
