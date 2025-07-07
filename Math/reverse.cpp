#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rn=0;
    while(n!=0){
        int ld=n%10;
        
        //underflow and overflow
        if((rn>INT_MAX/10)||(rn<INT_MIN/10)){
            return 0;
        }

        rn=(rn*10)+ld;
        n/=10;
    }
    return rn;
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}