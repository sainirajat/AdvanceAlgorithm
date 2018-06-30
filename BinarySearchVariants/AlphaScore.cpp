//problem statement >> https://hack.codingblocks.com/contests/c/452/299

#include<iostream>
using namespace std;
#define ll long long int


ll BinarySearchStairs(ll *arr,int n){
    ll s=0;
    ll e=INT_MAX;
    ll ans=0;
    while(s<=e){
        ll mid = (s+e)/2;
        if(canHaveAplhaScore(arr,n,mid)==true){
            
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
    
    cout<<BinarySearchStairs(arr,n);
    
}
