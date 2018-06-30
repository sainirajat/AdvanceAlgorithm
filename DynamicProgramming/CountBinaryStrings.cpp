//problem statement >> https://hack.codingblocks.com/contests/c/452/1272

#include<iostream>
using namespace std;
int findBinSub(int i){
    if(i<1)
        return 0;
    
    return (1+findBinSub(i-2)+findBinSub(i-1));
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        
        cout<<findBinSub(num)+1<<endl;
    }
    
    
    return 0;
}
