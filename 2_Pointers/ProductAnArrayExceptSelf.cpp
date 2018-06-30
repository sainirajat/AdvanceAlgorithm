//problem statement >> https://hack.codingblocks.com/contests/c/452/1600

#include<iostream>
using namespace std;
#define ll long long int

ll findMul(ll *arr,int n){
    ll ans = arr[0];
    for(int i=1;i<n;i++){
        ans *= arr[i];
        ans %= 1000000007;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    ll mul = findMul(arr,n);
//    cout<<mul;
    for(int i=0;i<n;i++){
        cout<<(mul/arr[i])<<" ";
    }
    
    
    return 0;
}
