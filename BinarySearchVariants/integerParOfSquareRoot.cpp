//problem link >> https://hack.codingblocks.com/contests/c/452/191

#include<iostream>

using namespace std;

int findIntRoot(int n){
    int s=1;
    int e=n;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
//        cout<<mid<<endl;
        int temp =mid*mid;
//        cout<<"temp --> "<<temp<<endl;
        if(temp==n)
            return mid;
        else if(temp<n){
            ans = mid;
            s=mid+1;
        }
        else{//temp>mid
            e=mid-1;
        }
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    if(n==0)
        cout<<"0";
    else
        cout<<findIntRoot(n)<<endl;
    
    return 0;
}
