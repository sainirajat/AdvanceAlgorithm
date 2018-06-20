//problem link >> https://hack.codingblocks.com/contests/c/452/71

#include<iostream>
#include<cstring>
using namespace std;

void replaceAllPie(char *in,char *out,int i,int j){
    
    if(in[i]=='\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    
    if(in[i]=='p'&&in[i+1]!='\0'){
        if(in[i+1]=='i'){
            out[j] = '3';
            out[j+1] = '.';
            out[j+2] = '1';
            out[j+3] = '4';
            replaceAllPie(in,out,i+2,j+4);
        }
        else{
            out[j] = in[i];
            replaceAllPie(in,out,i+1,j+1);
        }
    }
    else{
        out[j] = in[i];
        replaceAllPie(in,out,i+1,j+1);
    }
    
    return;

}

//3
//xpix
//xabpixx3.15x 
//xpipippixx


int main(){
    int n;
    cin>>n;
    char arr[n][1000];
    char out[n][4000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        replaceAllPie(arr[i],out[i],0,0);
    }
    return 0;
}
