//problem link >> https://hack.codingblocks.com/contests/c/452/71

#include<iostream>
#include<cstring>
using namespace std;

void replaceAllPie(char *arr[][1000],int length){
//    int length = strlen(arr);
    for(int j=0;j<length-1;j++){
        if(arr[0][j]=='p'&&arr[0][j+1]=='i'){
            cout<<"3.14";
            j++;
        }
        else{
            cout<<arr[0][j];
        }
    }
    
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    char arr[n][1000];
    for(int i=0;i<n;i++){
        cin>>arr[i][1000];
    }
    for(int j=0;j<n;j++){
        replaceAllPie(arr[j][1000],sizeof(arr[j]));
    }
    
    
    return 0;
}
