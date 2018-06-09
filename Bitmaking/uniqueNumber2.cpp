#include<iostream>

using namespace std;

int checkFirstSetBit(int num){
    int count = 0;
    while(1){
        if((num&1)==1){
            return count;
        }
        else{
            count++;
            num >>= 1;
        }
    }
}

int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    int firstPhase = 0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        firstPhase = (firstPhase^arr[i]);
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    
    //cout<<firstPhase<<endl<<endl;
    
    int firstSetBit = checkFirstSetBit(firstPhase);
    //cout<<firstSetBit;
    int comparator = (1<<firstSetBit);
    //cout<<comparator;
    
    int setA = 0;
    int setB = 0;
    for(i=0;i<n;i++){
        if((comparator&arr[i]) != 0 ){
            setA ^=arr[i];
        }
        else{
            setB ^= arr[i];
        }
    }
    
    cout<<setB<<" "<<setA;
    //cout<<"first---> "<<setA<<endl;
    //cout<<"second--->"<<setB<<endl;
    
    
    return 0;
}
