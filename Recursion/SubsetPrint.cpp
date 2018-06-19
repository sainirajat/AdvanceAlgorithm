//problem link >> https://hack.codingblocks.com/contests/c/452/73

#include<iostream>
#include<set>
#include<cstring>

using namespace std;

set <string> s;
void findSubsets(char *in,char*out,int i,int j){
    if(in[i]=='\0')
    {
        out[j]='\0';
        // cout<<out<<endl;
        string temp(out);
        s.insert(temp);
        return;
    }
    
    //including
    out[j] = in[i];
    findSubsets(in,out,i+1,j+1);
    
    //excluding
    findSubsets(in,out,i+1,j);
    
    return;
    
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char in[20];
        cin>>in;
        char out[20];
        findSubsets(in,out,0,0);
        
        //        for(auto it=s.begin();it!=s.end();i++){
        //            cout<<*it<<endl;
        //            cout<<"in the loop";
        //        }
        
        for (std::set<string>::iterator it=s.begin(); it!=s.end(); ++it)
            std::cout<< *it<<endl;
        
        s.clear();
    }
    
    
    
    return 0;
}
