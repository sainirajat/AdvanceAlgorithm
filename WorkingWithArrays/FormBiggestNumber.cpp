//problem link at >> https://hack.codingblocks.com/contests/c/452/1291

#include<iostream>
using namespace std;

int formBiggestNumber(int *arr,int n){
    
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
        ans[i] = formBiggestNumber(arr,size);
    }
    
    for(int k=0;k<n;k++){
        cout<<ans[k]<<endl;
    }
    
    return 0;
}
