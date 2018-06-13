//problem link is >> https://hack.codingblocks.com/contests/c/452/439

#include<iostream>

using namespace std;

void tiltTheImage(int n){
    int arr[n][n];
    int newArray[n][n];
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    //main computation
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            newArray[i][j] = arr[n-j-1][i];
        }
    }
    
    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<newArray[i][j]<<" ";
        }
        cout<<endl;
    }
    
}


int main(){
    int n;
    cin>>n;
    
    tiltTheImage(n);
    
    return 0;
}
