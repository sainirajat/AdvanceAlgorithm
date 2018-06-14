//problem link --> https://hack.codingblocks.com/contests/c/452/1289

#include<iostream>

using namespace std;

void findMaxLengthSubarray(int *arr,int n,int flag){
    
    int count=0;
    int temp=1;
    
    for(int j=1;j<n;j++){
        
        //increasing phase
        if(flag==0){
            if(arr[j-1]<arr[j]){
                temp+=1;
            }
            else{
                temp+=1;
                flag=1;
            }
            
        }
        
        //decreasing phase
        else{
            if(arr[j-1]>arr[j]){
                temp+=1;
            }
            else{
                temp=1;
                flag=0;
            }
        }
        if(temp>count){
            count=temp;
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
        if(size<=2){
            ans[i] = size;
        }
        else{
            int flag;
            if(arr[0]<=arr[1]){
                flag=0;
            }
            else{
                flag=1;
            }
            
            ans[i] = findMaxLengthSubarray(arr,size,flag);
        }
        
    }
    for(int j=0;j<n;j++){
        cout<<ans[j]<<endl;
    }
    return 0;
}











