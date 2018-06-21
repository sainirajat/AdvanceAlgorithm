//problem statement at >> https://hack.codingblocks.com/contests/c/452/61

#include<iostream>
using namespace std;

void findsets(int num){
    
    for(int i=0;i<=num/2;i++){
        for(int j=i;j<=num;j++){
            if(((i*i)+(j*j))==num)
                cout<<"("<<i<<","<<j<<") ";
        }
    }
}


int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        findsets(num);
        cout<<endl;
    }
    
    return 0;
}
