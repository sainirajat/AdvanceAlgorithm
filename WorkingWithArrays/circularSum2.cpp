//this method is wrong as it could take the next part of array again

#include<iostream>

using namespace std;

int findCircularSum(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int currentSum=0;
    int maxSum=0;
    for(int j=0;j<(2*n);j++){
        if(j<n){
            currentSum += arr[j];
            if(currentSum<0){
                currentSum = 0;
            }
            if(currentSum>maxSum){
                maxSum = currentSum;
            }
        }
        else{
            currentSum += arr[j-n];
            if(currentSum<0){
                currentSum = 0;
            }
            if(currentSum>maxSum){
                maxSum = currentSum;
            }
            
        }
    }
    return maxSum;
    
}

int main(){
    int n;
    cin>>n;
    int ans[n];
    
    for(int i=0;i<n;i++){
        int length;
        cin>>length;
        ans[i]=findCircularSum(length);
    }
    for(int j=0;j<n;j++){
        cout<<ans[j]<<endl;
    }
    return 0;
}
