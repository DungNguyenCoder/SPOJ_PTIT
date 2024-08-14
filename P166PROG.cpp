#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

string a = "0 1 2 3 4 5 6 7 8 9  0 1 2 3 4 5 6 7 8 9  0 1 2 3 4 5 6 7 8 9";
// 8 2 1 9 5
// 6 4 7 2 3
// 2 2 4 3 2 = 13
inline void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string pro;
    cin >> pro;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int k = abs(s[i]-pro[i]);
        if(k <= 5)
        {
            cnt += k;
        }
        else
        {
            if(s[i] > pro[i])
                k = 9 - (s[i] - '0') + (pro[i] - '0') + 1;
            else
                k = 9 - (pro[i] - '0') + (s[i] - '0') + 1;
            cnt += k;
        }
        // cout << k << endl;
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