//problem statement >> https://hack.codingblocks.com/contests/c/452/1267
//1
//abcd1e2 bc12ea bd1ea
//14511
// output--> 3
#include<iostream>
#include<algorithm>
//#include<cstring>
using namespace std;

int findLCS(char *s1,char *s2,char *s3,int n,int m,int t){
    int dp[n+1][m+1][t+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            for(int k=0;k<=t;k++){
                if(i==0||j==0||k==0)
                    dp[i][j][k] = 0;
                
                else if((s1[i-1]==s2[j-1])&&(s2[j-1]==s3[k-1]))
                    dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
                
                else{
                    int temp =  max(dp[i-1][j][k],dp[i][j-1][k]);
                    dp[i][j][k] = max(temp,dp[i][j][k-1]);
                }
            }
        }
    }
    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            for(int k=0;k<t;k++){
//                cout<<dp[i][j][k]<<" ";
//            }
//            cout<<endl;
//        }
//        cout<<endl<<endl;
//    }
    
//    cout<<"------";
    return dp[n][m][t];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        
        char s1[100],s2[100],s3[100];
        cin>>s1>>s2>>s3;
        cout<<findLCS(s1,s2,s3,strlen(s1),strlen(s2),strlen(s3))<<endl;
    }
    
    return 0;
}
