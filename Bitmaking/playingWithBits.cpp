#include<iostream>
using namespace std;

int countSetBits(int num){
    int count=0;
    while(num>0){
        count += (num&1);
        num >>= 1;
    }
    return count;
}

int main() {
    
    int n,i,j;
    cin>>n;
    int arr[n][2];
    
    //inputs
    for(i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    
    for (i=0;i<n;i++){
        int ans=0;
        if(arr[i][0]<arr[i][1]){
            for(j=arr[i][0];j<=arr[i][1];j++){
                ans += countSetBits(j);
            }
        }
        else{
            for(j=arr[i][1];j<=arr[i][0];j++){
                ans += countSetBits(j);
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}
