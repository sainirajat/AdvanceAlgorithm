//problem statement at >> https://hack.codingblocks.com/contests/c/452/346

#include<iostream>
#include<set>
#include<cstring>

using namespace std;

set <string> s;

void numberToname(char *in,char *out,int i,int j){
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        string temp(out);
        s.insert(temp);
        return;
    }
    
    //taking one digit at a time
    int digit = in[i] - '0';
    char ch = 'a'+ digit -1;
    if(digit!=0){
        out[j] = ch;
        numberToname(in,out,i+1,j+1);
    }
    
    //taking two digit at a time
    
    if(in[i+1]!='\0'){
        int secondDigit = in[i+1] - '0';
        int num = (digit*10)+secondDigit;
        if(num<=26){
            char ch = num + 'a' -1;
            out[j] = ch;
            numberToname(in,out,i+2,j+1);
            
        }
        
    }
    return;
    
}


int main(){
    char in[1000000];
    cin>>in;
    char out[1000000];
    
    numberToname(in,out,0,0);
    
    int sizeOfSet = s.size();
    cout<<"[";
    for(auto it=s.begin();it!=s.end();it++){
        if(sizeOfSet>1)
            cout<<*it<<", ";
        else
            cout<<*it;
        sizeOfSet--;
    }
    cout<<"]";
    return 0;
}
