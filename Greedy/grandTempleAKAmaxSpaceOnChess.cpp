//problem statment at >> https://hack.codingblocks.com/contests/c/452/975

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(long long int v1,long long int v2){
    return v1<v2;
}


int main(){
    int n;
    cin>>n;
    
    vector <long long int> v1;
    vector <long long int> v2;
    
    v1.push_back(0);
    v2.push_back(0);
    
    for(int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
    
    sort(v1.begin(),v1.end(),comp);
    sort(v2.begin(),v2.end(),comp);

    //now finding max in x and y axis
    long long int x = 0;
    long long int y = 0;
    for(int i=0;i<n;i++){
        
        if((v1[i+1] - v1[i])>x){
            x = (v1[i+1] - v1[i]);
        }
        if((v2[i+1] - v2[i])>y){
            y = (v2[i+1] - v2[i]);
        }
    }
//    cout<<x<<" --> "<<y;
    
    x--;
    cout<<x*(y-1)<<endl;

    return 0;
}
