#include <bits/stdc++.h>    
using namespace std;

int count(int n){
    int count=0;
    while(n>0){
        count+=1;
        n/=10;
    }
    return count;
}

//optimal method
int countLogMethod(int n){
    int count= int(log10(n)+1);
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<"new "<<countLogMethod(n);
    return 0;
}