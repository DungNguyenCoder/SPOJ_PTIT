#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

struct human
{
    string name;
    int d,m,y;
};

human a[10000];

void input(human &a)
{
    cin >> a.name;
    cin >> a.d >> a.m >> a.y;
}

bool cmp(human a, human b)
{
    if(a.y != b.y)
        return a.y > b.y;
    else
    {
        if(a.m != b.m)
            return a.m > b.m;
        else
            return a.d > b.d;
    }
}

void solution()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        input(a[i]);
    sort(a,a+n,cmp);
    cout << a[0].name << endl << a[n - 1].name;
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