#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}

void solution()
{
    int n;
    cin >> n;
    vector< pair<int,int> > v(n);
    for(int i = 0; i < n; i++)
    {
        v[i].first = i;
        cin >> v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < n; i++)
    {
        // if(v[i].first < v[n-1-i].first)
        // {
        //     cout << v[i].second - v[i].first;
        //     return;
        // }
        cout << v[i].first << " " << v[i].second << endl;
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