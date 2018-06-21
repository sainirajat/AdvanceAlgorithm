//problem statement at >> https://hack.codingblocks.com/contests/c/452/187

#include<iostream>

using namespace std;
#define ull unsigned long long

ull findGCD(ull a,ull b){
    if(b==0)
        return a;
    return findGCD(b,a%b);
    
    
}

int main(){
    ull a,b;
    cin>>a>>b;
    
    cout<<findGCD(a,b)<<endl;
    
    
}
