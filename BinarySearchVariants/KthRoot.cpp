#include <iostream>
#include<cmath>
#define ll long long int
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll s=0,e=n,ans=-1;
        while(s<=e){
            ll m=(s+e)/2;
            if(pow(m,k)<=n){
                ans=m;
                s=m+1;
            }
            else if(pow(m,k)>n)
                e=m-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
