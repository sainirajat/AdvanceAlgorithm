#include<iostream>
#include<cstring>
using namespace std;

void findLCS(char* s1,char* s2,int m,int n){
	
	int dp[m+1][n+1];
	// cout<<n<<" "<<m<<endl;
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){

			if(i==0||j==0){
				dp[i][j] = 0;
			}

			else if(s1[i-1]==s2[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}

			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
			
		}
	}
	//checking
	// for(int i=0;i<=m;i++){
	// 	for(int j=0;j<=n;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	//printing lcs

	int index = dp[m][n];
	char lcs[index+1];
	lcs[index] = '\0';
	int i=m,j=n;
	while(i>0 && j>0){
		if(s1[i-1] == s2[j-1]){
			lcs[index-1] = s1[i-1];
			i--;j--;index--;
		}
		else if(dp[i-1][j] > dp[i][j-1])
			i--;
		else
			j--;

	}
	cout<<lcs;

	return;

}


int main(){
	char s1[1000],s2[1000];
	cin>>s1>>s2;

	int m=strlen(s1);
	int n=strlen(s2);


	findLCS(s1,s2,m,n);

	


	return 0;
}