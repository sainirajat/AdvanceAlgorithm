//problem statement >> https://hack.codingblocks.com/contests/c/452/90

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp (pair<string,int> p1,pair<string,int> p2){
    if(p1.second == p2.second)
        return p1.first<p2.first;
    return (p1.second > p2.second);
}


int main(){
    int num,n;
    cin>>num>>n;
    
    vector <pair<string,int> > v;
    
    for(int i=0;i<n;i++){
        string s;
        int sal;
        cin>>s>>sal;
        v.push_back(make_pair(s,sal));
    }
    sort(v.begin(),v.end(),comp);

    for(int i=0;i<n;i++){
        if(v[i].second>=num){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
    return 0;
}
