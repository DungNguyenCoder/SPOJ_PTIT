#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

int ucln(int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solution()
{
    int n,m;
    cin >> n >> m;
    int a[n+1], b[m+1];
    for(int i = 0; i <= n; i++)
        cin >> a[i];
    for(int i = 0; i <= n; i++)
        cin >> b[i];
    if(n > m)
    {
        if(a[0]*b[0] > 0)
            cout << "Infinity";
        else
            cout << "-Infinity";
    }
    else if(n < m)
    {
        cout << "0/1";
    }
    else
    {
        int check = 1;
        if(a[0] < 0 || b[0] < 0)
        {
            check = 0;
        }
        if(a[0] < 0 && b[0] < 0)
        {
            check = 1;
        }
        a[0] = abs(a[0]);
        b[0] = abs(b[0]);
        if(check == 0)
        {
            cout << "-";
        }
        int k = ucln(a[0],b[0]);
        a[0] /= k;
        b[0] /= k;
        cout << a[0] << "/" << b[0];
    }
}

int main()
{
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}