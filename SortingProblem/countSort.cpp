#include<iostream>

using namespace std;

void sortArray(int *arr,int n){
    int max=1000000;
//    for(int i=0;i<n;i++){
//        if(arr[i]>max)
//            max=arr[i];
//    }
    
//    int B[max] = {0};
    int B[max];
    for(int i=0;i<max;i++){
        B[i] = 0;
    }
    for(int i=0;i<n;i++){
        B[arr[i]] += 1;
    }
//    //testing
//    for(int k=0;k<n;k++){
//        cout<<B[k]<<" ";
//    }
    for(int i=1;i<max;i++){
        B[i] += B[i-1];
    }
//
//    //testing
//    for(int k=0;k<n;k++){
//        cout<<B[k]<<" ";
//    }
//    cout<<endl<<"-----"<<endl;
    int newArray[n];
    for(int j=0;j<n;j++){
        newArray[B[arr[j]]] = arr[j];
        B[arr[j]]--;
    }
//
    for(int k=1;k<=n;k++){
        cout<<newArray[k]<<" ";
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortArray(arr,n);
    
    return 0;
}
