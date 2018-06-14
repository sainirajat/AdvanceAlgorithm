//link of problem >> https://hack.codingblocks.com/contests/c/452/266

#include<iostream>
using namespace std;

int factorial(int n)
{
    int i;
    for(i = n-1; i > 1; i--)
        n *= i;
    
    return n;
}
//result = factorial(n)/(factorial(r)*factorial(n-r));

int numberOfGoodSubArrays(int *arr,int n){
    int count=0;
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
//    int newArray[n] = {0};
    int newArray[n+1];
    for(int i=0;i<=n;i++){
        newArray[i] = 0;
    }
    
    for(int i=0;i<n;i++){
        int temp = arr[i]%n;
        newArray[temp+1]++;
    }
    
    for(int i=0;i<n;i++){
        count += factorial(newArray[i])/((2)*factorial(n-2));
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
    for(int k;k<n;k++){
        cout<<ans[k]<<endl;
    }
    return 0;
}
