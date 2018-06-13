//problem link -->  https://hack.codingblocks.com/contests/c/452/1300

#include<iostream>
using namespace std;

int findMin(int n,int m){
    if(n<m){
        return n;
    }
    else{
        return m;
    }
}

int rainWaterCollected(int n){
    
    int heights[n];
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    
    int leftMaxHeight[n];
    int tempMaxHeight = 0;
    for(int i=0;i<n;i++){
        if(heights[i]>tempMaxHeight){
            tempMaxHeight = heights[i];
        }
        leftMaxHeight[i] = tempMaxHeight;
    }
    
    //trail check
    /*for(int j=0;j<n;j++){
        cout<<endl<<j<<"-->"<<leftMaxHeight[j]<<"  ";
    }*/
    
    int rightMaxHeight[n];
    tempMaxHeight = 0;
    for(int j=n-1;j>=0;j--){
        if(heights[j]>tempMaxHeight){
            tempMaxHeight = heights[j];
        }
        rightMaxHeight[j] = tempMaxHeight;
    }
    /*
    for(int j=0;j<n;j++){
        cout<<endl<<j<<"-->"<<rightMaxHeight[j]<<"  ";
    }*/
    
    int water=0;
    for(int k=0;k<n;k++){
        int temp;
        temp = findMin(leftMaxHeight[k],rightMaxHeight[k]);
        water += (temp-heights[k]);
    }
    
    
    return water;
    
}


int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        int numOfBuildings;
        cin>>numOfBuildings;
        arr[i] = rainWaterCollected(numOfBuildings);
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    
    
    return 0;
}
