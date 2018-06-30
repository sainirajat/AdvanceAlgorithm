//problem statement >> https://hack.codingblocks.com/contests/c/452/1097
#include<iostream>
#include<set>
#include<cstring>
using namespace std;
set <string> s;

void findSubSequence(char *in,char *out,int i,int j){
    if(in[i]=='\0'){
        out[j] = '\0';
        string temp(out);
        s.insert(temp);
        return;
    }
    //including
    out[j] = in[i];
    findSubSequence(in,out,i+1,j+1);
    
    //excluding
    findSubSequence(in,out,i+1,j);
    
    return;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char in[100000];
        char out[100000];
        cin>>in;
        findSubSequence(in,out,0,0);
        
        int count = 0;
        for(auto it=s.begin();it!=s.end();++it){
            count++;
        }
        cout<<count<<endl;
        s.clear();
    }
    
    return 0;
}
