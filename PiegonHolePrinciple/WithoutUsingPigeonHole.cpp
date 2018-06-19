//problem statement >> https://hack.codingblocks.com/contests/c/452/266

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    return n*factorial(n-1);
}

int numberOfGoodSubArrays(int *arr,int n){
    int cummulativeArray[n+1];
    cummulativeArray[0] = 0;
    
    // copying array to new bigger one
    for(int i=1;i<=n;i++){
        cummulativeArray[i] = arr[i-1];
    }
    
    //cummulative array
    for(int i=1;i<=n;i++){
        cummulativeArray[i] = (cummulativeArray[i]+cummulativeArray[i-1]);
    }
    
    //taking modulo n
    for(int i=1;i<=n;i++){
        cummulativeArray[i] = (cummulativeArray[i]%n);
    }
    
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(cummulativeArray[i]==cummulativeArray[j]){
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
        ans[i]=numberOfGoodSubArrays(arr,size);
    }
//        cout<<" -- "<<endl;
    for(int k;k<n;k++){
        cout<<ans[k]<<endl;
    }
    return 0;
}

