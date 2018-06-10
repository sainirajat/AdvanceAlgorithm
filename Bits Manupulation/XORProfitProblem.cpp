//problem link  -- https://hack.codingblocks.com/contests/c/452/498

#include<iostream>

using namespace std;

int maximizingXor(int l, int r) {
    int ans=0;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            if((i^j)>ans){
                ans = (i^j);
            }
        }
    }
    return ans;
}

int main(){
    int l,r;
    cin>>l>>r;
    cout<<maximizingXor(l,r);
    
    return 0;
}
