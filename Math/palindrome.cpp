#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(int n){
    if(n<0){
        return false;
    }

    int rn=0;
    int dup=n;
    
    while(n>0){
        int ld=n%10;
        if((rn>INT_MAX/10)||(rn<INT_MIN/10)){
            return 0;
        }
        rn=(rn*10)+ld;
        n/=10;
    }
    // if(dup==rn) cout<<"True";
    // else cout<<"False";
    return dup==rn;
}

int main(){
    int n=0;
    cin>>n;
    CheckPalindrome(n);


    return 0;
}