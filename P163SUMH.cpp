#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int a,b;
    cin >> a >> b;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 1; i <= 6; i++)
    {
        int x = abs(a-i);
        int y = abs(b-i);
        if(x < y)
            ++cnt1;
        else if(x == y)
            ++cnt2;
        else
            ++cnt3;
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;
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