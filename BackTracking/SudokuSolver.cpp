//problem statement >> https://hack.codingblocks.com/contests/c/452/391
#include<iostream>
#include<cmath>
using namespace std;

bool canPlace(int arr[][9],int n,int i,int j,int num ){
    //checking for column and row
    for(int x=0;x<n;x++){
        if(arr[x][j]==num||arr[i][x]==num)
            return false;
    }
    
    //checking for submatrix
    int rn = sqrt(n);
    int sx = (i/rn)*rn;
    int sy = (i/rn)*rn;
    
    for(int x=sx;x<sx+rn;x++){
        for(int y=sy;sy<sy+rn;sy++){
            if(arr[x][y]==num){
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int arr[][9],int n,int i,int j){
    cout<<"--------------------------------------";
    if(i==n){
        //print the sudoku
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                cout<<arr[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //reached at the end of row
    if(j==n){
        return solveSudoku(arr,n,i+1,0);
    }
    
    if(arr[i][j]!=0){
        return solveSudoku(arr,n,i,j+1);
    }
    
    //recursive call
    for(int x=1;x<=n;x++){
        if(canPlace(arr,n,i,j,x)){
            //Assumption
            arr[i][j] = x;
            bool couldWeSolve = solveSudoku(arr,n,i,j+1);
            if(couldWeSolve)
                return true;
        }
    }
    arr[i][j] = 0;
    return false;
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[9][9];

//    int arr[9][9] = {
//        {5 ,3 ,0 ,0 ,7 ,0 ,0 ,0,0},
//        {6 ,0 ,0 ,1, 9, 5, 0, 0, 0},
//        {0 ,9 ,8 ,0 ,0, 0 ,0 ,6 ,0},
//        {8 ,0 ,0 ,0 ,6 ,0 ,0, 0 ,3},
//        {4 ,0 ,0, 8 ,0, 3, 0 ,0, 1},
//        {7 ,0, 0 ,0, 2 ,0 ,0 ,0, 6},
//        {0 ,6 ,0 ,0, 0, 0 ,2 ,8, 0},
//        {0 ,0, 0, 4 ,1 ,9 ,0 ,0 ,5},
//        {0, 0 ,0 ,0, 8 ,0 ,0 ,7 ,9}
//        };
    
    //initialize with zero
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"---------";
    solveSudoku(arr,n,0,0);
    return 0;
}

