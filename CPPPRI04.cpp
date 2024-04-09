#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 100000
#define TEST 1

ll nt[mx + 5];

void sang()
{
    nt[0] = 1;
    nt[1] = 1;
    for(int i = 0; i * i <= mx; i++)
    {
        if(nt[i] == 0)
        {
            for(int j = i * i; j <= mx; j += i)
            {
                nt[j] = 1;
            }
        }
    }
}


void solution()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
            cout << "1 ";
        else if(i == 2)
            cout << "2 ";
        else
        {
            if(i % 2 == 0)
                cout << "2 ";
            else if(nt[i] == 0)
                cout << i << " ";
            else
            {
                for(int j = 3; j <= i; j += 2)
                {
                    if(nt[j] == 0 && i % j == 0)
                    {
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
    }
    cout << "\n";
}

int main()
{
    faster();
    int t;
    sang();
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