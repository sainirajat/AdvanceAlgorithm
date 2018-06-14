//link of problem is >> https://hack.codingblocks.com/contests/c/452/406

#include<iostream>

using namespace std;

int findPower(int a,int b){
    if(b==0){
        return 1;
    }
    int common = findPower(a,b/2);
    common *= common;
    if(b&1){
        return a*common;
    }
        return common;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<findPower(n,p)<<endl;
    
    return 0;
}

