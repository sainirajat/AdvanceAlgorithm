//problem statement >> https://hack.codingblocks.com/contests/c/452/922
#include<iostream>
using namespace std;

int knapsack(int *weights,int *costs,int n,int bagWeight){
    if(n==0||bagWeight==0)
        return 0;
    
    
    if(weights[n-1]>bagWeight)
        return knapsack(weights,costs,n-1,bagWeight);
    
    return max(costs[n-1]+knapsack(weights,costs,n,bagWeight-weights[n-1]),
               knapsack(weights,costs,n-1,bagWeight));
    
}


int main(){
    int n,bagWeight;
    cin>>n>>bagWeight;
    
    int weight[n];
    int costs[n];
    
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    for(int i=0;i<n;i++){
        cin>>costs[i];
    }
    int dp[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            dp[i][j] = 0;
    }
    cout<<knapsack(dp,weight,costs,n,bagWeight);
    
    
    return 0;
}
