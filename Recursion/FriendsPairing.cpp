//problem link >> https://hack.codingblocks.com/contests/c/452/1092

#include<iostream>
using namespace std;

int findPairing(int n){
    if(n<=1){
        return 1;
    }
    return ((findPairing(n-1))+(findPairing(n-2)*n-1));
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i] = findPairing(arr[i]);
    }
    for(int k=0;k<n;k++){
        cout<<ans[k]<<endl;
    }
    
    return 0;
}
