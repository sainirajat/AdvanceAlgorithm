//problem link >> https://hack.codingblocks.com/contests/c/452/1092


#include <iostream>
using namespace std;
long long int countFriendsPairings(int n)
{
    long long int dp[n + 1];
    for (int i = 0; i <= n; i++)
    {
        if (i <= 2)
            dp[i] = i;
        else
            dp[i] = dp[i - 1] + (i - 1) * dp[i - 2];
    }
    
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cout << countFriendsPairings(num) << endl;
    }
    
    return 0;
}
