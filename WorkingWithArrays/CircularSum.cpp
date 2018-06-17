//problem link >> https://hack.codingblocks.com/contests/c/452/1288

#include<iostream>

using namespace std;


int findMaxSubarray(int *arr,int n){
    int cs=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        cs += arr[i];
        if(cs<0)
            cs=0;
        if(cs>maxSum)
            maxSum=cs;
    }
    return maxSum;
}


int findCircularSubMax(int *arr,int n){
    int sum=0;
    //making arr -ve and taking sum of previous array
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i] = -1*arr[i];
    }
    int max = findMaxSubarray(arr,n);
    
    return max+sum;
}




int main(){
    int n;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++){
        int length;
        cin>>length;
        int arr[length];
        for(int j=0;j<length;j++){
            cin>>arr[j];
        }
//        cout<<findMaxSubarray(arr,length);
        int candidate1 = findMaxSubarray(arr,length);
        int candidate2 = findCircularSubMax(arr,length);

        if(candidate1>candidate2)
            ans[i] = candidate1;
        else
            ans[i] = candidate2;

    }
    for(int k=0;k<n;k++){
        cout<<ans[k]<<endl;
    }
    
    
    return 0;
}
