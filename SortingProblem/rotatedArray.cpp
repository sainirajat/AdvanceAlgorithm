//problem at >> https://hack.codingblocks.com/contests/c/452/433

#include<iostream>

using namespace std;

int findNumber(int *arr,int target,int n){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<findNumber(arr,target,n);
    
    return 0;
}
