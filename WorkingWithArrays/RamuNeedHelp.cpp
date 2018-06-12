// problem link --> https://hack.codingblocks.com/contests/c/452/104

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

int findMyCost(){
    int c[4];
    for(int i=0;i<4;i++){
        cin>>c[i];
    }
    int n,m;
    cin>>n>>m;
    
    int rickshaw[n];
    int cabs[m];
    for(int j=0;j<n;j++){
        cin>>rickshaw[j];
    }
    
    for(int k=0;k<m;k++){
        cin>>cabs[k];
    }
    
    //settling rickshaw
    
    int costRick = 0;
    for(int i=0;i<n;i++){
        int tempCost = 0;
        tempCost = findMin((rickshaw[i]*c[0]),c[1]);
        costRick +=tempCost;
    }
    costRick = findMin(costRick,c[2]);
    
    //settling cabs
    
    int costCabs = 0;
    for(int i=0;i<m;i++){
        int temp = 0;
        temp = findMin((cabs[i]*c[0]),c[1]);
        costCabs += temp;
    }
    costCabs = findMin(costCabs,c[2]);
    
    int finalCost = 0;
    finalCost = findMin(c[3],costCabs+costRick);
    
    cout<<finalCost;
    return finalCost;
    
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<findMyCost()<<endl;
    }
    
    return 0;
}








