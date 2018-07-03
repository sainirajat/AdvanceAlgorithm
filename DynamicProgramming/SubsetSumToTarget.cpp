#include<iostream>
using namespace std;
#define ll long long int


bool findSum(int* set,int n,ll sum){

	bool dp[n+1][sum+1];
	for(int i=0;i<=n;i++)
		dp[i][0] = true;

	for(ll i=1;i<=sum;i++)
		dp[0][i] = false;

	for(int i=1;i<=n;i++){
		for(ll j=1;j<=sum;j++){
			if(j<set[i-1])
				dp[i][j] = dp[i-1][j];
			if(j>=set[i-1])
				dp[i][j] = dp[i-1][j] || dp[i-1][j-set[i-1]];
		}
	}
	return dp[n][sum];

}


int main(){
	int n;
	ll sum;
	cin>>n>>sum;

	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	bool isThereAset = findSum(arr,n,sum);
	if(isThereAset)
		cout<<"Yes";
	else
		cout<<"NO";

	return 0;
}