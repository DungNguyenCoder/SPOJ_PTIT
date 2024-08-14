#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        string s1,s2,s;
        cin >> s1 >> s2 >> s;
        int check = 1;
        int cnt = 0;
        while(1)
        {
            ++cnt;
            if(cnt > 50)
            {
                check = 0;
                break;
            }
            string tach = "";
            for(int i = 0; i < n; i++)
            {
                tach = tach + s2[i];
                tach = tach + s1[i];
            }
            if(tach == s)
            {
                check = 1;
                break;
            }
            else
            {
                for(int i = 0; i < n; i++)
                {
                    s1[i] = tach[i];
                    s2[i] = tach[i+n];
                }
            }
        }
        if(check == 0)
            cout << -1;
        else 
            cout << cnt;
        cout << "\n";
    }
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