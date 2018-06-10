#include<iostream>
using namespace std;

int countSetBits(int num){
    int count;
    while(num){
        count++;
        num = num&(num-1);
    }
    return count;
}

int main(){
    
    //cout<<(5&7)<<endl<<(5|7)<<endl<<(5^7);
    cout<<countSetBits(7)<<endl;
    int n,i,j;
    
    cin>>n;
    int arr[n][2];
    //inputs
    for(i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    //output
    for(i=0;i<n;i++){
        cout<<arr[i][0]<<"  "<<arr[i][1]<<endl;
    }
    
    return 0;
}

