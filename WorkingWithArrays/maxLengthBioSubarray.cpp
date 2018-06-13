//problem link --> https://hack.codingblocks.com/contests/c/452/1289

#include<iostream>

using namespace std;

void findMaxLengthSubarray(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<=2){
        cout<<n<<endl;
        return;
    }
    
    int flag;
    if(arr[0]<arr[1]){
        flag=0;
    }
    else{
        flag=1;
    }
    
    int count=0;
    int temp=1;
    
    for(int j=1;j<n;j++){
        
        //increasing phase
        if(flag==0){
            if(arr[j-1]<arr[j]){
                temp+=1;
            }
            else{
                temp+=1;
                flag=1;
            }
            
        }
        
        //decreasing phase
        else{
            if(arr[j-1]>arr[j]){
                temp+=1;
            }
            else{
                temp=1;
                flag=0;
            }
        }
        if(temp>count){
            count=temp;
        }
    }
    
    cout<<count<<endl;
}



int main(){
    int n;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        findMaxLengthSubarray();
    }
    
    return 0;
}
