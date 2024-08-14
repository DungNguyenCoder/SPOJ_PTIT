#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    // for(int i = 0; i <= 15; i++)
    //     cout << boi4[i] << endl;
    string s;
    while(1)
    {
        cin >> s;
        if(s == "[END]")
            break;
        ll n;
        cin >> n;
        ll k = n % (4+1);
        if(k%2 == 0 && k != 4)
            cout << "Hanako\n";
        else
            cout << "Taro\n";
    }
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