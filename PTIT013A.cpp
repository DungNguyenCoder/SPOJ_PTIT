#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 1

void solution()
{
    int n;
    cin >> n;
    int a = n % 10;
    int b = n / 10 % 10;
    int ans = b * 10 + a;
    if(ans == 86)
        cout << "1\n";
    else
        cout << "0\n";
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