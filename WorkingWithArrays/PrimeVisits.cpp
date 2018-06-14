//problem link >> https://hack.codingblocks.com/contests/c/452/63

#include<iostream>
using namespace std;

int findNumberOfVisits(int a,int b){
    int count = 0;
    for(int i=a;i<=b;i++){
        
        if((i^1)==0){
        }
        else{
        int temp=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                temp++;
            }
        }
        if(temp==2){
            count++;
        }
        }
        
    }
    return count;
}



int main(){
    int n;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ans[i] = findNumberOfVisits(a,b);
    }
    for(int j=0;j<n;j++){
        cout<<ans[j]<<endl;
    }
    
    
    return 0;
}
