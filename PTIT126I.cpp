#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    string a,b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int doc, ngang;
    for(int i = 0; i < n; i++)
    {
        int check = 0;
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                doc = i;
                ngang = j;
                check = 1;
                break;
            }
        }
        if(check)
            break;
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == ngang)
            {
                cout << a[j];
            }
            else if(j == doc)
            {
                cout << b[i];
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
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