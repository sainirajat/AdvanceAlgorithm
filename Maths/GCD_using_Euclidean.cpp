//problem statement at >> https://hack.codingblocks.com/contests/c/452/187

#include<iostream>

using namespace std;
#define ll long long

ll findGCD(ll a,ll b){
    if(b==0)
        return a;
    return findGCD(b,a%b);
    
    
}

int main(){
    ll a,b;
    cin>>a>>b;
    
    cout<<findGCD(a,b)<<endl;
    
    
}
