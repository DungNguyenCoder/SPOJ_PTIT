#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

int tn(int n)
{
    int tmp = n;
    int rev = 0;
    while(n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return tmp == rev;
}

void solution()
{
    int n;
    cin >> n;
    if(tn(n))
        cout << "YES\n";
    else
        cout << "NO\n"; 
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }    
    else        t = 1;
    while(t--)
    {
        solution();
    }
}