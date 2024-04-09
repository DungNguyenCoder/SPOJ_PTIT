#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

void solution()
{
    string a;
    string b;
    cin >> a >> b;
    int cnt = 0;
    int n = a.size();
    int m = b.size();
    int moc = 0;
    for(int i = 0; i < n; i++)
    {
        int check = 0;
        for(int j = moc; j < n; j++)
        {
            if(a[i] == b[j])
            {
                moc = j;
                cnt += moc;
                check = 1;
                break;
            }
        }
        if(!check)
            ++cnt;
    }
    cout << cnt;
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