//problem statement >> https://hack.codingblocks.com/contests/c/452/56

#include<iostream>
using namespace std;

long long unsigned findFactSum(){
    int num;
    cin>>num;
    
    long long unsigned ans=1;
    for(int i=1;i<=num;i++){
        ans *=i;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    
    long long unsigned ans=0;
    for(int i=0;i<n;i++){
        ans += findFactSum();
    }
    cout<<ans%107;
    
    return 0;
}
