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
        int a[n+5];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
            {
                for(int j = 1; j <= a[i]; j++)
                    cout << "1 ";
            }
            else
            {
                if(a[i] > a[i-1])
                {
                    for(int j = 1; j <= a[i] - a[i-1]; j++)
                    {
                        cout << i << " ";
                    }
                }
            }
        }
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