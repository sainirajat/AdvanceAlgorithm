//problem statement >> https://online.codingblocks.com/player/3072/content/785
#include<iostream>
#include<cstring>

using namespace std;

#define ll long long

ll a[1000005],prefixSum[1000005];

//prefixSUm array is to store the freq
int main(){
    
    int n;
    cin>>n;
    
    int target;
    cin>>target;
    
    ll sum=0;
    //to initialise my sub string array to 0
    memset(prefixSum,0,sizeof prefixSum);
        
    prefixSum[0] = 1;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
        sum %= target;
            
        //update the freq
//        sum = (sum+n)%n;
        prefixSum[sum]++;
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll no = prefixSum[i];
        ans += ((no)*(no-1))/2;
    }
    if(ans>1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
}
