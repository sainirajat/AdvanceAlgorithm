//problem statment at >> https://hack.codingblocks.com/contests/c/452/355

#include<iostream>
using namespace std;

void findASCIISubset(char *in,char *out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" , ";
        return;
    }
    
    //including in[i]
    out[j] = in[i];
    findASCIISubset(in,out,i+1,j+1);
    
    //excluding in[i]
    findASCIISubset(in,out,i+1,j);
    
    //taking ASCII value
    int temp = in[i];
    
//    //testing
  // cout<<temp;
   // cout<<temp;
    
    //not working
//    cout<<char(temp/10);
//    cout<<char(temp%10);
    
   // out[j] = temp;
    out[j] = temp/10+'0';
    out[j+1] = temp%10+'0';
    findASCIISubset(in,out,i+1,j+2);
    
    return;
    
    
}



int main(){
    char in[1000];
    cin>>in;
    char out[2000];
    findASCIISubset(in,out,0,0);

    return 0;
}
