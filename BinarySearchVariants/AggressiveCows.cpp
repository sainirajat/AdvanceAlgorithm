//problem statement >> https://hack.codingblocks.com/contests/c/452/713
#include<iostream>
using namespace std;
#define ll long long int

bool canPlace(int *stalls,int cows,int n,ll mid){
    int c=1;
    int position = stalls[0];
    for(int i=1;i<n;i++){
        if((stalls[i]-position)>=mid){
            c++;
            position = stalls[i];
            if(c==cows){
                return true;
            }

        }
    }
    return false;
}

int main(){
    int n,cows;
    cin>>n>>cows;

    int stalls[n];
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
    sort(stalls,stalls+n);
    
    ll s=0;
    ll e = INT_MAX;

    int ans=-1;
    while(s<=e){
        ll mid = (s+e)/2;
        if(canPlace(stalls,cows,n,mid)==true){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
