//problem statement at >> https://hack.codingblocks.com/contests/c/452/57

#include<iostream>

using namespace std;
#define ll long long

ll findgcd(ll a,ll b){
    if(b==0)
        return a;
    return findgcd(b,a%b);
}


int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans = 1000000;
    for(int i=0;i<n-1;i++){
        ans = min(ans,findgcd(arr[i],arr[i+1]));
    }
    cout<<ans<<endl;
}
