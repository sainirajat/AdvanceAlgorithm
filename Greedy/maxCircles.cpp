//problem statement >> https://hack.codingblocks.com/contests/c/452/563

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    return p1.second < p2.second;
}


int main(){
    int n;
    cin>>n;
    
    vector<pair<int,int> > v;
    
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a-b,a+b));
    }
    
    sort(v.begin(),v.end(),comp);
    
    int count=0;
    int time = v[0].second;
    for(int i=1;i<n;i++){
        //activity already started before selected one ended
        if(v[i].first<time){
            count++;
        }
        else{
            time = v[i].second;
        }
        
    }
    
    cout<<count<<endl;
    
    return 0;
}
