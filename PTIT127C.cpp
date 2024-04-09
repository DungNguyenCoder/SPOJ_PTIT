#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first)
        return a.first < b.first;
    else
        return a.second < b.second;
}

inline void solution()
{
    int n;
    cin >> n;
    pair<int,int> v[n + 5];
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v,v+n,cmp);
    // for(int i = 0; i < n; i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
	sort(v,v,cmp);
	int res = 1, pos = 0;
	for(int i = 1; i < n; i++)
    {
		if(v[pos].second <= v[i].first)
        {
			res++;
			pos = i;
		}
		else if(v[pos].second > v[i].second)
            pos = i;
	}
	cout << res;
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