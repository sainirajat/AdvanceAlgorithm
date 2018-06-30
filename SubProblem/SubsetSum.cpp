//problem link >> https://hack.codingblocks.com/contests/c/452/136

#include<iostream>
using namespace std;

int flag=0;

void findSubsetSum(int *arr,int n,int i,int sum){
    if(flag!=1){
        if(i==n){
//            cout<<"sum --> "<<sum<<endl;
            if(sum==0){
                flag=1;;
            }
            return;
        }
        if(i!=n-1){
            findSubsetSum(arr,n,i+1,sum);
        }
        findSubsetSum(arr,n,i+1,sum+arr[i]);
    }
    else{
        return;
    }
}

int main(){
    int n;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++){
//        cout<<"loop -- > "<<i<<endl;
        flag=0;
        int length;
        cin>>length;
        int arr[length];
        for(int j=0;j<length;j++){
            cin>>arr[j];
        }
        findSubsetSum(arr,length,0,0);
        if(flag==0)
            ans[i]=0;
        else
            ans[i]=1;
    }
    
    
    for(int i=0;i<n;i++){
        if(ans[i]==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    
    return 0;
}
