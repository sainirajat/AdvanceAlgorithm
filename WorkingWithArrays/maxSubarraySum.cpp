//problem link --> https://hack.codingblocks.com/contests/c/452/1259

//using Kadane's algo

#include<iostream>

using namespace std;

int findMaxSubarray(){
    //cout<<"here i come";
    int num;
    cin>>num;
    
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    int currentSum=0;
    int maxSum=0;
    
    for(int i=0;i<num;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        if(currentSum>maxSum){
            maxSum=currentSum;
        }
        //cout<<currentSum<<"  **  "<<endl;
    }
    return maxSum;
}


int main(){
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        arr[i]=findMaxSubarray();
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}
