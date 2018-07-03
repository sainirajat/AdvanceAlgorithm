#include<iostream>
using namespace std;


int findLCS(int* arr1,int* arr2,int n,int m,int k,int dp[2000][2000][5]){
	if(k<0)
		return -1000;

	if(n<0||m<0)
		return 0;

	if(dp[n][m][k]!=-1)
		return dp[n][m][k];

	dp[n][m][k] = max(findLCS(arr1,arr2,n-1,m,k,dp),findLCS(arr1,arr2,n,m-1,k,dp));

	if(arr1[n]==arr2[m])
		dp[n][m][k] = max(dp[n][m][k],1+findLCS(arr1,arr2,n-1,m-1,k,dp));

	dp[n][m][k] = max(dp[n][m][k],1+findLCS(arr1,arr2,n-1,m-1,k-1,dp));
	return dp[n][m][k];

}


int main(){
	int n,l,k;
	cin>>n>>l>>k;
	int arr1[n],arr2[l];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<l;i++)
		cin>>arr2[i];

	int dp[2000][2000][5];
	for(int i=0;i<2000;i++){
		for(int j=0;j<2000;j++){
			for(int m=0;m<5;m++){
				dp[i][j][m] = -1;
			}
		}
	}

	cout<<findLCS(arr1,arr2,n,l,k,dp)<<endl;


	return 0;
}