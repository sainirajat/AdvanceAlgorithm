#include<iostream>

using namespace std;

long flippingBits(long N) {
    long copyNum = N;
    int arr[32];
    
    for(int j=0;j<32;j++){
        arr[j]=1;
    }
    
    for(int i=31;i>=0;i--){
        if((copyNum&1)==1){
            arr[i] = 0;
        }
        copyNum >>=1;
    }
    
    /*test
    for(int k=0;k<32;k++){
        cout<<arr[k];
    }
    cout<<"done"<<endl;
    */
    
    /*input
     3
     2147483647
     1
     0
     
     output should be
     2147483648
     4294967294
     4294967295
     */
    
    int power = 0;
    unsigned long ans=0;
    
    for(int i=31;i>0;i--){
        
        if(arr[i]==1){
            ans += (arr[i]<<power);
            cout<<32-i<<"   "<<ans<<"     ||";
        }

        power++;
    }
    return ans*2;
    
}

int main(){
    int n;
    cin>>n;
    
    long arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<flippingBits(arr[i])<<endl<<endl<<endl;
    }
    return 0;
}



/*
 long flippingBits(long N) {
 long copyNum = N;
 int arr[32]={1};
 for(int i=31;i>=0;i--){
 if((copyNum&1)==1){
 arr[i] = 0;
 }
 else{
 arr[i] = 1;
 }
 copyNum >>=1;
 }
 int power = 0;
 int ans=0;
 for(int i=31;i>=0;i--){
 ans+=(arr[i]<<power);
 power++;
 }
 return ans;
 
 }
 */

