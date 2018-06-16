//problem link at >> https://hack.codingblocks.com/contests/c/452/675

#include<iostream>

using namespace std;

void findLowerVariant(int *arr,int target,int n){
    int s=0,e=n-1;
    int ans = -1;
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid]==target){
            ans = mid;
        }
        if(arr[mid]>=target){
            e=mid;
        }
        if(arr[mid]<target){
            s = mid+1;
        }
    }
    cout<<ans<<" ";
}

void findUpperVariant(int *arr,int target,int n){
    int s=0,e=n-1;
    int ans = -1;
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid]==target){
            ans = mid;
        }
        if(arr[mid]>target){
            e=mid;
        }
        if(arr[mid]<=target){
            s = mid+1;
        }
    }
    cout<<ans<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int targets;
    cin>>targets;
    int array[targets];
    
    for(int i=0;i<targets;i++){
        cin>>array[i];
    }
    for(int j=0;j<targets;j++){
        findLowerVariant(arr,array[j],n);
        findUpperVariant(arr,array[j],n);
        cout<<endl;
    }
    
    return 0;
}
