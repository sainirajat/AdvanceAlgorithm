#include<iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    
    int ans=arr[0];
    for(i=1;i<n;i++){
        cin>>arr[i];
        ans = (ans^arr[i]);
    }
    cout<<ans;
    return 0;
}
