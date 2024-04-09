#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

void solution()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[10000];
    int j = -1;
    for(int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            ++j;
            a[j] = i;
            n /= i;
        }
    }
    if(n != 1)  a[++j] = n;
    --k;
    if(k > j)
        cout << "-1\n";
    else
        cout << a[k] << "\n";
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