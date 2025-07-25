//armstrong number for 3 digits

#include <bits/stdc++.h>
using namespace std;

bool armstorngNum(int n)
{
    int duplicate = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n /= 10;
    }
    return duplicate == sum;
}

int main()
{
    int n;
    cin >> n;
    cout<<boolalpha<<armstorngNum(n);
    return 0;

}
