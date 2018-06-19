//problem link >> https://hack.codingblocks.com/contests/c/452/71

#include<iostream>
#include<cstring>
using namespace std;

void replaceAllPie(char *arr,int length){

    for(int j=0;j<length-1;j++){
        if(arr[j]=='p'&&arr[j+1]=='i'){
            cout<<"3.14";
            j++;
        }
        else{
            cout<<arr[j];
        }
    }

    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    char arr[n][1000];
    int length[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i][1000];
        int count=0;
        int j=0;
        while(arr[i][j]!='\0'){
            count++;j++;
        }
        length[i] = count;
    }
    
    for(int k=0;k<n;k++){
        cout<<length[k]<<"     ";
    }
    
    for(int j=0;j<n;j++){
        replaceAllPie(arr[j],length[j]);
    }
    
    return 0;
}
