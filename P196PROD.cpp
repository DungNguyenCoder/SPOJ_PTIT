#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

bool cmp(pair<string,int> a, pair<string,int> b)
{
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

void solution()
{
    int n;
    cin >> n;
    vector< pair<string,int> > v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < n; i++)
        cout << v[i].second << " ";
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