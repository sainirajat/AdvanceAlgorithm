//problem statement >> https://hack.codingblocks.com/contests/c/452/408
#include<iostream>
using namespace std;
#define ll long long int

bool canRead(ll *books,ll students,ll mid,ll n){
    ll sum = 0;
    ll tempStudent = 1;
    for(ll i=0;i<n;i++){
        if(sum + books[i]>mid){
            sum = books[i];
            tempStudent++;
            if(tempStudent>students)
                return false;
        }
        else{
            sum+=books[i];
        }
        
        
//        if(sum>mid){
//            tempStudent++;
//            sum = 0;
//            if(tempStudent>students)
//                return false;
//        }
    
    }
    return true;
}

int main(){
    ll n,students;
    cin>>n>>students;
    ll books[n];
    
    for(ll i=0;i<n;i++){
        cin>>books[i];
    }
    ll maximumPages=0;
    
    for(ll i=0;i<n;i++){
        maximumPages+=books[i];
    }
    
    ll minimumPages = books[n-1];
    
    ll s=minimumPages;
    ll e=maximumPages;
    ll ans=-1;
    while(s<=e){
        ll mid = (s+e)/2;
//        cout<<mid<<" ";
        if(canRead(books,students,mid,n)==true){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
