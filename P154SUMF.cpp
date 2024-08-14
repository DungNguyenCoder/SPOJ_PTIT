#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    int n;
    cin >> n;
    vector< pair<int,int> > v(n);
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        if(v[i].second - v[i].first >= 2)
            ++cnt;
    }
    cout << cnt;
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