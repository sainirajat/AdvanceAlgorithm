//problem statement at >> https://hack.codingblocks.com/contests/c/452/1599

#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int

ll findMaxWaterLogged(ll *arr,int n){
    ll Water = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            ll temp = min(arr[i],arr[j]);
            temp *= (j-i);
            if(temp>Water)
                Water = temp;
        }
    }
    return Water;
}

int main(){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<findMaxWaterLogged(arr,n)<<endl;
    
    return 0;
}
//9
//1 8 6 2 5 4 8 3 7
//ans--> 49

//Time limit is 2sec so it should work but 2 TLE
