#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    int a[8];
    for(int i = 0; i < 8; i++)
        cin >> a[i];
    int cnt1 = 0, cnt2 = 0;
    for(int i = 1; i < 8; i++)
    {
        if(a[i-1] < a[i])
            ++cnt1;
        else if(a[i-1] > a[i])
            ++cnt2;
    }
    if(cnt1 == 7)
        cout << "ascending";
    else if(cnt2 == 7)
        cout << "descending";
    else
        cout << "mixed";
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