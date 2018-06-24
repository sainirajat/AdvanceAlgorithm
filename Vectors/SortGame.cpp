//problem statement >> https://hack.codingblocks.com/contests/c/452/90

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp (pair<string,int> p1,pair<string,int> p2){
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
    
    for(int i=0;i<n-1;i++){
        if(v[i].second>=num){
        if(v[i].first>v[i+1].first){
            cout<< v[i+1].first<<" "<<v[i+1].second<<endl;
            cout<< v[i].first<<" "<<v[i].second<<endl;
            i++;
        }

        else
            cout<< v[i].first<<" "<<v[i].second<<endl;
        }
        
    }
    if(v[n-1].second>=num)
        cout<< v[n-1].first<<" "<<v[n-1].second<<endl;
    
    return 0;
}
