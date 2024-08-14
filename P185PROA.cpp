#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

inline void solution()
{
    string a;
    cin >> a;
    int j = 0;
    if (a[0] == '9')
        j++;
    for (int i = j; i < a.size(); i++)
        if (a[i] > '4')
            a[i] = '9' - a[i] + '0';
    cout << a << "\n";
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