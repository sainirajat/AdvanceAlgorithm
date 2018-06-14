// problem link >> https://hack.codingblocks.com/contests/c/452/1288
//in this method we will take the max negative array from the center and keep them out(taking out the max negate out from the array to get the max Circular subarray)


#include<iostream>

using namespace std;

int findSimpleSum(int* arr,int n){
    int currentSum = 0;
    int MaxSum = 0;
    
    for(int i=0;i<n;i++){
        currentSum += arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        if(currentSum>MaxSum){
            MaxSum = currentSum;
        }
    }
    
    return MaxSum;
}

int findCircularSum(int* arr,int n){
    int newarray[n];
    int totalSum = INT_MIN;
    for(int i=0;i<n;i++){
        newarray[i] = (-1*arr[i]);
        totalSum += arr[i];
    }
    
    int currentSum = 0;
    int MaxNegativeSum = 0;
    for(int j=0;j<n;j++){
        currentSum += newarray[j];
        if(currentSum<0){
            currentSum = 0;
        }
        if(MaxNegativeSum<currentSum){
            MaxNegativeSum = currentSum;
        }
    }
    cout<<"Max Negative --> "<<MaxNegativeSum<<endl;
    return totalSum-MaxNegativeSum;
}

int findMaxSum(int *arr){
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int simpleSum;
    int circularSum;
    simpleSum = findSimpleSum(arr,n);
    circularSum = findCircularSum(arr,n);
    
    cout<<"simple sum --> "<<simpleSum<<endl;
    
    if(simpleSum>circularSum){
        return simpleSum;
    }
    else{
        return circularSum;
    }
}


int main(){
    int n;
    cin>>n;
    
    int ans[n];
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        int arr[n];
        for(int j=0;j<size;j++){
                cin>>arr[j];
        }
        ans[i] = findMaxSum(arr);
    }
    
    for(int j=0;j<n;j++){
        cout<<ans[j]<<endl;
    }
    
    return 0;
}
