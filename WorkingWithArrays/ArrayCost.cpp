//problem link >> https://hack.codingblocks.com/contests/c/452/270

#include<iostream>
using namespace std;

int findArrayCost(int *arr,int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}


int main(){
    int n;
    cin>>n;
    int ans[n];
    
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
        }
        ans[i] = findArrayCost(arr,size);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    
    
    return 0;
}
