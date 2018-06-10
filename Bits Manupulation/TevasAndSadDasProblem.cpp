#include<iostream>

using namespace std;

int findIndexOfLuckyNumber(int num){
    
    int numCopy = num;
    
    //first step--> calculate number of numbers upto n-1 digits
    int power = 1;
    int firstAnswer=0;
    while(numCopy>9){
        firstAnswer=firstAnswer+(1<<power);
        power++;
        numCopy=numCopy/10;
    }
    //or we can directly use the GP formulae as 2(2^(x-1)-1)/2-1;
    
    //second step is to calculate the number of possibility with n digits
    power = 0;
    int secondAnswer = 0;
    int secondNumberCopy = num;

    while(secondNumberCopy>0){
        if(secondNumberCopy%10==7){
            secondAnswer += (1<<power);
        }
        power++;
        secondNumberCopy = secondNumberCopy/10;
    }
    
    return (firstAnswer+secondAnswer+1);
    
}

int main(){
    int luckyNumber;
    cin>>luckyNumber;
    cout<<findIndexOfLuckyNumber(luckyNumber)<<endl;
    
    return 0;
}
