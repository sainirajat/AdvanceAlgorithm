//problem statement >> https://hack.codingblocks.com/contests/c/452/705

#include<iostream>
using namespace std;

bool findNumber(int mat[30][100],int target,int i,int j,int m,int n){
    if(i>=m||j>=n)
        return false;
    if(mat[i][j]==target)
        return true;
    if(mat[i][j]>target)
        return findNumber(mat,target,i,j-1,m,n);
    if(mat[i][j]<target)
        return findNumber(mat,target,i+1,j,m,n);
    return false;
}


int main(){
    int m,n;
    cin>>m>>n;
    
    int mat[30][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int target;
    cin>>target;
    
    bool ans = findNumber(mat,target,0,n-1,m,n);
    
    cout<<ans;
    
    return 0;
}
