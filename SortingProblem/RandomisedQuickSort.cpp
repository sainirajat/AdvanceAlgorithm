//problem statement at >> https://hack.codingblocks.com/contests/c/452/389
#include<iostream>
#include<ctime>

using namespace std;

void swapper(int *arr,int s,int e){
    int i=e,j;
    srand(time(NULL));
    for( ;i>0;i--){
        j = rand()%i+1;
        swap(arr[i],arr[j]);
    }
}

int partition(int *arr,int s,int e){
    int pivot = arr[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
         return i+1;
}

void QuickSort(int *arr,int s,int e){
    if(s>=e)
        return;
    int p = partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
    
    
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapper(arr,0,n-1);
    
    QuickSort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    return 0;
}

