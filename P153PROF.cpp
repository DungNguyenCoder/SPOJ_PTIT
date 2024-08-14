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
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    sort(a,a+n,greater<int>());
    sort(b,b+n,greater<int>());
    int cnt = 0;
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[j] > a[i])
        {
            ++cnt;
            ++j;
        }
    }
    cout << cnt;
    /*
        6 5 4 2
        8 7 3 1
        8 7 2 3
    */
    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] < b[i])
    //         ++cnt;
    // }
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