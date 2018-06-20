//problem statement at >> https://hack.codingblocks.com/contests/c/452/188


// formula used -->>   gcd(a,b) * lcm(a,b) = a*b
#include<iostream>

using namespace std;
#define ll long long

ll findgcd(ll a, ll b){
    if(b==0)
        return a;
    return findgcd(b,a%b);
}

int main(){
    ll a,b;
    cin>>a>>b;
    ll gcd = findgcd(a,b);
    
    cout<<((a*b)/(gcd))<<endl;
    
}
