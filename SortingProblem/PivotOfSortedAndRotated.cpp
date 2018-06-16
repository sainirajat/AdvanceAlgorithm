//problem link >> https://hack.codingblocks.com/contests/c/452/435

#include<iostream>
using namespace std;

int BinaryFindPivotElement(int *arr,int n){
    int s=0,e=n-1;
    int ans = -1;
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid]<arr[mid+1]){
            return mid-1;
        }
        if(arr[s]>arr[mid])
            e=mid;
        if(arr[mid]>arr[s]){
            ans=mid;
            s=mid;
        }
    }
    return ans-1;
}

int FindPivotElement(int *arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            return i;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<FindPivotElement(arr,n)<<endl;
    
    
    return 0;
}
