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
    int a[n+5];
    int sum = 0;
    vector<int> b;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2 == 0)
            sum += a[i];
        else
            b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    {
        for(int i = 0; i < b.size(); i++)
        {
            sum += b[i];
        }
    }
    if(b.size()%2 == 0)
        sum -= b[0];
    cout << sum;
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