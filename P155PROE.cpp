#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

int trans[10] = {2,7,2,3,3,4,2,5,1,2};

void solution()
{
    string s;
    cin >> s;
    int ans = 1;
    int a = s[0] - '0';
    int b = s[1] - '0';
    ans = trans[a] * trans[b];
    cout << ans;
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