//problem statement >> https://hack.codingblocks.com/contests/c/452/266

#include<iostream>
using namespace std;

#define ll long long

ll CalcCombination(ll n, ll r){
    ll i, res;
    if(r > 0)
        return (n/r)*CalcCombination(n-1,r-1);
    else
        return 1;
}


int numberOfGoodSubArrays(ll *arr,ll n){
    ll cummulativeArray[n+1];
    cummulativeArray[0] = 0;
    
    // copying array to new bigger one
    for(int i=1;i<=n;i++){
        cummulativeArray[i] = arr[i-1];
    }
    
    //cummulative array
    for(int i=1;i<=n;i++){
        cummulativeArray[i] = (cummulativeArray[i]+cummulativeArray[i-1]);
    }
    
    //taking modulo n
    for(int i=1;i<=n;i++){
        //to make negative numbers positive
        cummulative[i] = cummulative[i] + n;
        //taking mod
        cummulativeArray[i] = (cummulativeArray[i]%n);
    }
    
    //    int newArray[n] = {0};
    ll newArray[n+1];
    for(int i=0;i<=n;i++){
        newArray[i] = 0;
    }
    
    for(int i=0;i<=n;i++){
        ll temp = cummulativeArray[i];
        newArray[temp]++;
    }
    
    //fine till here
    
    ll count=0;
    for(int i=0;i<=n;i++){
        ll nC2 = 0;
        if(newArray[i]>1){
            nC2 = CalcCombination(newArray[i],2);
        }
        count +=nC2;
    }
    return count;
}

int main(){
    ll n;
    cin>>n;
    ll ans[n];
    for(ll i=0;i<n;i++){
        ll size;
        cin>>size;
        ll arr[size];
        for(ll j=0;j<size;j++){
            cin>>arr[j];
        }
        ans[i]=numberOfGoodSubArrays(arr,size);
    }
    for(ll k;k<n;k++){
        cout<<ans[k]<<endl;
    }
    return 0;
}
