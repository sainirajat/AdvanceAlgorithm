// problem from hackerblocks

#include <iostream>

using namespace std;

int getLength(long long n){
    int count;
    while(n>0){
        count++;
        n /= 10;
    }
    
    return count;
}

int main(){
    long long num;
    cin>>num;
    
    int length;
    length = getLength(num);
    
    int decimalCount = 1;
    long long copyNum = num;
    long long ans=0;
    
    int count = 0;
    
    while(copyNum){
        count++;
        int temp = copyNum%10;
        if(((copyNum%10)>4)&&(count!=length)){
            temp = (9 - (copyNum%10));
        }
        
        ans +=(temp*decimalCount);
        decimalCount *=10;
        copyNum /= 10;
    }
    cout<<ans;
    
    return 0;
}
