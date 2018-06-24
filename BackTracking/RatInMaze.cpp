#include<iostream>
using namespace std;

bool ratInMaze(char maze[10][10],int soln[][10],int i,int j,int m,int n){
    if(i==m&&j==n){
        soln[i][j] = 1;
        //print the maze
        for(int x=0;x<=m;x++){
            for(int y=0;y<=n;y++){
                cout<<soln[x][y]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    if(i>m||j>n){
        return false;
    }
        
    if(maze[i][j]=='X'){
        return false;
    }

    //assuming soln exist
    soln[i][j] = 1;
    
    //recursive case
    bool rightSuccess = ratInMaze(maze,soln,i,j+1,m,n);
    bool downSuccess = ratInMaze(maze,soln,i+1,j,m,n);
    
    //backtracking
    soln[i][j] = 0;
    
    if(rightSuccess||downSuccess){
        return true;
    }
    
    return false;
        
}

int main(){
    
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };
    int soln[10][10] = {0};
    
    int m=4,n=4;
    
    bool ans = ratInMaze(maze,soln,0,0,m-1,n-1);
    if(!ans){
        cout<<"no path exist";
    }
    
    return 0;
}
