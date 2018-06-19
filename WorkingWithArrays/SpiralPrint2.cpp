//problem at >> https://hack.codingblocks.com/contests/c/452/440

#include<iostream>

using namespace std;

void spiralPrint(int m, int n)
{
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            printf("%d ", a[k][i]);
        }
        k++;
        
        for (i = k; i < m; ++i)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;
        
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        }
        
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;
        }
    }
}

int main()
{
    int R,C;
    cin>>R>>C;
    spiralPrint(R, C);
    return 0;
}
