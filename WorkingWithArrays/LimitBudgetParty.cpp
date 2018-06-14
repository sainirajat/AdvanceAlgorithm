//problem link >> https://hack.codingblocks.com/contests/c/452/1239

#include<iostream>

using namespace std;

bool partyTime(int *arr,int n,int budget){
    sort(arr,arr+n);
    
    for(int i=0;i<n;i++){
        
    
    
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    bool ans[n];
    
    for(int i=0;i<n;i++){
        int size,budget;
        cin>>size>>budget;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
        }
        ans[i] = partyTime(arr,size,budget);
    }
    for(int k=0;k<n;k++){
        if(ans[k]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
