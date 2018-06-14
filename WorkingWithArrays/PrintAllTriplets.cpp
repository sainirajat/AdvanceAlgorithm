//problem link >> https://hack.codingblocks.com/contests/c/452/214

#include<iostream>

using namespace std;

void findTriplet(int *arr,int target,int n){
    //int ans[3] = {0};
    //n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int sum=0;
        sum+=arr[i];
        int j = i+1;
        int k = n-1;
        while (j<k) {
            int temp = arr[j]+arr[k];
            int comparator = temp+sum;
            if(comparator==target){
                cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
                j++;
                k--;
            }
            else if(comparator>target){
                k--;
            }
            else{
                j++;
            }
        }
        
    }
}


int main(){
    int size;
    cin>>size;
    int arr[size];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    
    findTriplet(arr,target,size);
    
    return 0;
}
