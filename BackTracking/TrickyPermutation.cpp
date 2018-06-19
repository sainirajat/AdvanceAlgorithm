//problem statement at >> https://hack.codingblocks.com/contests/c/452/737

#include<iostream>
#include<set>
#include<cstring>

using namespace std;

set <string> s;

void findPermutations(char *in,char *out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        string temp(out);
        s.insert(temp);
        return;
    }
    //including
    out[j] = in[i];
    findPermutations(in,out,i+1,j+1);
    //excluding
    findPermutations(in,out,i+1,j);
    
    return;
    
}

int main(){
    char in[10];
    cin>>in;
    char out[10];
    findPermutations(in,out,0,0);

    for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
    
    return 0;
}
