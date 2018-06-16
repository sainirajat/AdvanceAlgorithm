//problem link >> https://hack.codingblocks.com/contests/c/452/716

#include<iostream>
using namespace std;

bool canPaint(int *arr,int painters,int boards,int time){
    bool ans=false;
    
    
}


void paintTheBoards(int *arr,int painters,int boards){
    int s=0,e=INT_MAX;
    int ans=INT_MAX;
    while(s<e){
        mid = (s+e)/2;
        if(canPaint(arr,painters,boards,mid)){
            ans=mid;
            s=mid;
        }
        else{
            e=mid;
        }
    }
    return ans;
    
}


int main(){
    
    int painters,boards;
    cin>>painters>>boards;
    int arr[boards];
    
    for(int i=0;i<boards;i++){
        cin>>arr[boards];
    }
    paintTheBoards(arr,painters,boards);
    
    return 0;
}
