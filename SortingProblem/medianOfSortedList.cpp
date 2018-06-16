//problem link is >> https://hack.codingblocks.com/contests/c/452/422

#include<iostream>

using namespace std;


int findMedian(int *arr1,int *arr2,int n){
    int newArray[2*n];
    int i=0,j=0,k=0;
    while((i!=n)&&(j!=n)){
        if(arr1[i]<arr2[j]){
            newArray[k] = arr1[i];
            i++;k++;
        }else{
            newArray[k] = arr2[j];
            k++;j++;
        }
    }
    while(i!=n){
        newArray[k] = arr1[i];
        i++;
    }
    while(j!=n){
        newArray[k] = arr2[j];
        j++;
    }
//    for(int i=0;i<2*n;i++){
//        cout<<newArray[i];
//    }
    int median;
    if(((2*n)&1)==1){
        return newArray[((2*n)-1)/2];
    }else{
//        cout<<"this one called";
        return (newArray[((2*n)-1)/2]+newArray[(((2*n)-1)+1)/2])/2;
    }
}

int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++){
        cin>>arr2[j];
    }
    cout<<findMedian(arr1,arr2,n);
    
    return 0;
}
