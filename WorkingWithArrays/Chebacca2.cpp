#include<iostream>

using namespace std;



int main(){
    char a[20];
    cin>>a;
    
    int i=0;
    if(a[i]=='9'){
        i++;
    }
    
    for( ; a[i]!='\0';i++){
        
        int digit = a[i] - '0';  //to change ASCI value into int
        
        if(digit >= 5){
            digit = 9 - digit;
            a[i] = digit + '0';
        }
    }
    
    cout<<a;
    
    return 0;
}