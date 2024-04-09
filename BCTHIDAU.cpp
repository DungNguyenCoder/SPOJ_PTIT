#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

struct diem
{
    ll dung;
    ll time;
};

struct thidau
{
    string name;
    ll point;
    ll ans;
};

thidau a[mx+5];
diem b[4];

bool cmp(thidau a, thidau b)
{
    if(a.ans != b.ans)
        return a.ans > b.ans;
    else
        return a.point < b.point;
}

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        ll stime = 0;
        ll ansdung = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> b[j].dung >> b[j].time;
            if(b[j].dung != 0 && b[j].time != 0)
            {
                ++ansdung;
                stime += b[j].time;
                stime += (b[j].dung - 1) * 20;
            }
        }
        a[i].point = stime;
        a[i].ans = ansdung;
    }
    sort(a,a+n,cmp);
    cout << a[0].name << " " << a[0].ans << " " << a[0].point;
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