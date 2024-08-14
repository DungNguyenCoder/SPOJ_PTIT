#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 0

void solution()
{
    char a[105][105];
    string s;
    cin >> s;
    int n = s.size();
    if(n <= 3)
        cout << s;
    else
    {
        int r = 1;
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                r = i;
            }
        }
        int c = n/r;
        int k = 0;
        for(int i = 0; i < c; i++)
        {
            for(int j = 0; j < r; j++)
            {
                a[j][i] = s[k];
                ++k;
            }
        }
        // cout << r << c;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                cout << a[i][j];
            }
        }
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