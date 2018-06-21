//problem statment >> https://hack.codingblocks.com/contests/c/452/702

#include<iostream>
#include<cstring>
using namespace std;
#define ll long long

int simpleGCD(ll a,ll b){
    if(b==0)
        return a;
    return simpleGCD(b,a%b);
}

int reduceB(ll a,char *b){
    ll mod = 0;
    for(int i=0;i<strlen(b);i++){
        mod = ((mod*10) + b[i] - '0')%a;
    }
    return mod;
}


int findBigGCD(ll a,char *b){
    ll B = reduceB(a,b);
    return simpleGCD(a,B);
    
}

int main(){
    ll a;
    cin>>a;
    char b[250];
    cin>>b;
    
    cout<<findBigGCD(a,b)<<endl;
    
    
    return 0;
}
