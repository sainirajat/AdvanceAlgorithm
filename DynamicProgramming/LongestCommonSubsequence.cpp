//problem statement >> https://hack.codingblocks.com/contests/c/452/1267
#include<iostream>
#include<algorithm>
int findLongestSubsequence(char *s1,char* s2,char*s3,int *dp,int i,int j,int k,int m){
    if(i==-1||j==-1||k==-1)
        return 0;
    
    if(dp[m]!=0)
        return dp[m];
    
    if(s1[i]==s2[j]==s3[k]){
        dp[m] = 1 + findLongestSubsequence(s1,s2,s3,dp,i-1,j-1,k-1,m-1);
    }
    else{
        dp[m] = max((findLongestSubsequence(s1,s2,s3,dp,i-1,j,k,m-1)),
                    (findLongestSubsequence(s1,s2,s3,dp,i,j-1,k,m-1)),
                    (findLongestSubsequence(s1,s2,s3,dp,i,j,k-1,m-1)),
                    (findLongestSubsequence(s1,s2,s3,dp,i-1,j-1,k,m-1)),
                    (findLongestSubsequence(s1,s2,s3,dp,i,j-1,k-1,m-1)),
                    (findLongestSubsequence(s1,s2,s3,dp,i-1,j,k-1,m-1)));
    }
    return dp[m];
    
}


using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int dp[100];
        for(int m=0;m<100;m++){
            dp[m] = 0;
        }
        
        char s1[100];
        char s2[100];
        char s3[100];
        cin>>s1>>s2>>s3;
        int m = max(strlen(s1),strlen(s2),strlen(s3));
        
        cout<<findLongestSubsequence(s1,s2,s3,dp,strlen(s1)-1,strlen(s2)-1,strlen(s3)-1,m);
    }
    
    
    
    return 0;
}
