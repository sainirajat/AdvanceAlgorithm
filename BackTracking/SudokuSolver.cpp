//problem statement >> https://hack.codingblocks.com/contests/c/452/391
#include<iostream>
using namespace std;



bool solveSudoku(int arr[][9],int n){
    
    
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[9][9];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    solveSudoku(arr,n);
    //print sudoku
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

