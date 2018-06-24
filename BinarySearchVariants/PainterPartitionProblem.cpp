//problem link >> https://hack.codingblocks.com/contests/c/452/716

#include<iostream>
using namespace std;

bool canPaint(int *arr,int painters,int boards,int time){
    int freePainter = painters-1;
    int t = arr[0];
    
    
    for(int b=1;b<boards+painters;b++){
        for(int i=0;i<painters;i++){
            if(arr[b]>0){
                arr[i]--;
            }
        }
        t += arr[b];
        cout<<t<<" ";
        if(t>time){
            return false;
        }
    }
    
    return true;
}


int paintTheBoards(int *arr,int painters,int boards){
    int s=0,e=INT_MAX;
    int ans=INT_MAX;
    
    
    
    while(s<=e){
        int mid = (s+e)/2;
        if(canPaint(arr,painters,boards,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
    
}


int main(){
    
    int painters,boards;
    cin>>painters>>boards;
    int arr[boards];

    for(int i=0;i<boards;i++)
        cin>>arr[i];
    
    sort(arr,arr+boards);
    
    cout<<paintTheBoards(arr,painters,boards)<<endl;
    
    return 0;
}
