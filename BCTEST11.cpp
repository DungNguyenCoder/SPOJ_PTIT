#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define TEST 0

bool check1(int n)
{
    if(n == 4 || n == 7)
        return true;
    return false;
}

bool scnn(int n)
{
    while(n)
    {
        int a = n % 10;
        if(a != 4 && a != 7)
            return false;
        n /= 10;
    }
    return true;
}

bool check2(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(scnn(i))
        {
            if(n % i == 0)
                return true;
        }
    }
    return false;
}

void solution()
{
    int n;
    cin >> n;
    if(check1(n) || check2(n))
        cout << "YES";
    else
        cout << "NO";
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