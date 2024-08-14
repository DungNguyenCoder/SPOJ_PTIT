#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 1

inline void solution()
{
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 0; i <= sqrt(n / 2); i++)
    {
        int a = n - i * i;
        if (sqrt(a) == round(sqrt(a)))
            dem++;
    }
    cout << dem << "\n";
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