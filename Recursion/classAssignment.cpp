//problem link >> https://hack.codingblocks.com/contests/c/452/875

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;
    int temp[3] = {0,1,1};
    while(n>0){
        temp[0] = temp[1];
        temp[1] = temp[2];
        temp[2] = temp[0]+temp[1];
        n--;
    }
    return temp[2];
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cout<<"#"<<j+1<<" : "<<factorial(arr[j])<<endl;
    }
    
    
    return 0;
}
