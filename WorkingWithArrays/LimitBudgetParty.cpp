//problem link >> https://hack.codingblocks.com/contests/c/452/1239

#include<iostream>

using namespace std;
int flag=0;
int partyTime(int *arr,int n,int i,int sum,int budget){
    if(flag==0){
        //base case
        if(i>=n)
            return 0;
        if(sum==budget){
            flag=1;
            return 0;
        }
        
        return partyTime(arr,n,i+1,sum+arr[i],budget) + partyTime(arr,n,i+1,sum,budget);
        
    }
    else
        return 0;
}


int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        flag=0;
        int size,budget;
        cin>>size>>budget;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
        }
        int temp = partyTime(arr,size,0,0,budget);
        if(flag==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        
    }
    
    return 0;
}
