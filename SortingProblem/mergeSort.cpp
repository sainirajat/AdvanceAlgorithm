//problem statment at >> https://hack.codingblocks.com/contests/c/452/395
#include<iostream>
using namespace std;

void merge(int *arr,int l,int r,int mid){
    int n1=mid-l+1,n2=r-mid;

    int L1[n1],L2[n2];
    for(int i=0;i<n1;i++){
        L1[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        L2[i] = arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(L1[i]<=L2[j]){
            arr[k]=L1[i];
            i++;
        }
        else{
            arr[k]=L2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=L2[j];
        j++;k++;
    }

}
void mergeSort(int *arr,int i,int j){
    if(i<j){
        int mid = (i+j)/2;
        mergeSort(arr,i,mid);
//        cout<<"----"<<endl;
        mergeSort(arr,mid+1,j);
        merge(arr,i,j,mid);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
