//problem statement >> https://hack.codingblocks.com/contests/c/452/66

#include<iostream>
#include<cstring>
using namespace std;

void findXOR(char *arr1,char *arr2,int i,int n){
    if(i==n)
        return;
    if(arr1[i]==arr2[i])
        cout<<"0";
    else
        cout<<"1";
    findXOR(arr1,arr2,i+1,n);
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char arr1[100],arr2[100];
        cin>>arr1>>arr2;
        int n = strlen(arr1);
        findXOR(arr1,arr2,0,n);
        cout<<endl;
        
    }
}
