#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
#define mod 100000007
#define TEST 1

void solution()
{
    int T;
    cin >> T;
    string n;
    cin >> n;
    int len = n.size();
    int vt = -1;
    for(int i = len-1; i > 0; i--)
    {
        int ni1 = n[i-1] - '0';
        int ni = n[i] - '0';
        if(ni1 < ni)
        {
            vt = i - 1;
            break;
        }
    }
    if(vt == - 1)
        cout << T << " " << "BIGGEST\n";
    else
    {
        for(int i = len-1; i >= 0; i--)
        {
            int ni = n[i] - '0';
            int nvt = n[vt] - '0';
            if(ni > nvt)
            {
                int tmp = ni;
                n[i] = nvt + '0';
                n[vt] = tmp + '0';
                break;
            }
        }
        for(int i = vt+1; i < len; i++)
        {
            for(int j = vt+1; j < len-1; j++)
            {
                int nj = n[j] - '0';
                int nj1 = n[j+1] - '0';
                if(nj > nj1)
                {
                    int tmp = nj;
                    n[j] = nj1 + '0';
                    n[j+1] = tmp + '0';
                }
            }
        }
        cout << T << " ";
        for(int i = 0; i < len; i++)
            cout << n[i];
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