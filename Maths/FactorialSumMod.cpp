//problem statement >> https://hack.codingblocks.com/contests/c/452/56

#include<iostream>
using namespace std;

unsigned long long  findFactSum(){
    int num;
    cin>>num;
    
    unsigned long long  ans=1;
    for(int i=1;i<=num;i++){
        ans *=i;
        ans %=107;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    
    unsigned long long  ans=0;
    for(int i=0;i<n;i++){
        ans += findFactSum();
    }
    cout<<ans%107;
    
    return 0;
}
