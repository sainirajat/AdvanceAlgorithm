#include<iostream>

using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    int ans[64] = {0};

    for(int j=0;j<n;j++){
        
        int num = arr[j];
        int i=0;
        while(num){
            ans[i] += (num&1);
            i++;
            num >>=1;
        }
    }
    int power=1;
    int finalAnswer = 0;
    for(int i=0;i<64;i++){
        ans[i] %= 3;
        finalAnswer += (ans[i]*power);
        power++;
    }
    cout<<finalAnswer;
    
    return 0;
}
