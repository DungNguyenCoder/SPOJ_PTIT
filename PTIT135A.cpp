#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

int xe[200];

inline void solution()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ta1, ta2, tb1, tb2, tc1, tc2;
    cin >> ta1 >> ta2 >> tb1 >> tb2 >> tc1 >> tc2;
    for(int i = ta1; i < ta2; i++)
        ++xe[i];
    for(int i = tb1; i < tb2; i++)
        ++xe[i];
    for(int i = tc1; i < tc2; i++)
        ++xe[i];
    int sum = 0;
    for(int i = 0; i < 200; i++)
    {
        // cout << xe[i] << " ";
        if(xe[i] == 1)
            sum += a;
        else if(xe[i] == 2)
            sum += b*2;
        else if(xe[i] == 3)
            sum += c*3;
    }
    cout << endl;
    cout << sum;
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