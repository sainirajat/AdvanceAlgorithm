//problem at >> https://hack.codingblocks.com/contests/c/452/440

#include<iostream>

using namespace std;

void printSpiral(int rows, int cols){
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    
    int sr=0,er=rows-1;
    int sc=0,ec=cols-1;
    while((sr<=er)&&(sc<=ec)){
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        for(int j=sr;j<=er;j++){
            cout<<arr[j][ec]<<" ";
        }
        ec--;
        
        if(sr<er){
            for(int k=ec;k>=sc;k--){
                cout<<arr[er][k]<<" ";
            }
            er--;
        }

        if(sc<ec){
            
            for(int l=er;l>=sr;l--){
                cout<<arr[l][sc]<<" ";
            }
            sc++;
        }
    }
    
}

int main(){
    int n,m;
    cin>>n>>m;
    
    printSpiral(n,m);
    
    
    return 0;
}
