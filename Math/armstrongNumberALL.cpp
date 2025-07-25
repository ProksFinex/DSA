#include <bits/stdc++.h>
using namespace std;

bool armsnumfor(int n){
    int numDigit=to_string(n).size();
    int sumOfPowers=0;

    for(int temp=0;temp!=0;temp/10){
        sumOfPowers+=pow(temp%10,numDigit);
    }
    return sumOfPowers==n;
}

bool armsnumWhile(int n){
    int original=n;
    int numDigits=0;

    int temp=n;
    
    //count digits
    while(temp>0){
        numDigits++;
        temp/=10;
    }

    int sum=0;
    temp=n;//redeclaring 
    while(temp>0){
        int digit=temp%10;
        sum+=pow(digit,numDigits);
        temp/=10;
    }
    return sum==original;

}

int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<armsnumWhile(n);
    return 0;
}