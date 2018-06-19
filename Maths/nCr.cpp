//simple program to find nCr

#include<iostream>
using namespace std;

int findnCr(int n,int r){
    if(r>0)
        return (n/r)*findnCr(n-1,r-1);
    else
        return 1;
}


int main(){
    int n,r;
    cin>>n>>r;
    
    cout<<findnCr(n,r)<<endl;
    
    
    return 0;
}
