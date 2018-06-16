//problem link >> https://hack.codingblocks.com/contests/c/452/63
//algo used >> https://www.geeksforgeeks.org/sieve-of-eratosthenes/
#include<iostream>

//Sieve of Eratosthenes

using namespace std;

int SieveOfEratosthenes(int n,int a)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    
    // count all prime numbers
    int count=0;
    for (int p=a; p<=n; p++)
        if (prime[p])
            count++;
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    
    for(int j=0;j<n;j++){
        if(arr[j][0]!=1)
            cout<<SieveOfEratosthenes(arr[j][1],arr[j][0])<<endl;
        else
            cout<<SieveOfEratosthenes(arr[j][1],arr[j][0])-1<<endl;
    }
    
    return 0;
}
