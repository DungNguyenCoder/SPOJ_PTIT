#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int a[5];
int b[4];

inline void solution()
{
    while(1)
    {
        int moc;
        for(int i = 1; i <= 4; i++)
        {
            cin >> a[i];
            if(a[i] == -1)
                moc = i;
        }
        if(a[1] == -1 && a[2] == -1 && a[3] == -1 && a[4] == -1)
            break;
        int d;
        // cout << moc << endl;
        if(moc == 1)
        {
            if(a[2] + a[4] == 2*a[3])
            {
                d = a[4] - a[3];
                a[moc] = a[2] - d;
                cout << a[moc];
            }
            else if(a[2] * a[4] == a[3]*a[3])
            {
                d = a[4] / a[3];
                a[moc] = a[2] / d;
                cout << a[moc];
            }
            else
            {
                cout << -1;
            }
        }
        else if(moc == 2)
        {
            if((a[3] - a[1])/2 + a[3] == a[4])
            {
                d = a[4] - a[3];
                a[moc] = a[1] + d;
                cout << a[moc];
            }
            else if(sqrt(a[3] / a[1]) * a[3] == a[4])
            {
                d = a[4] / a[3];
                a[moc] = a[1] * d;
                cout << a[moc];
            }
            else
            {
                cout << -1;
            }
        }
        else if(moc == 3)
        {
            if((a[4] - a[2])/2 + a[1] == a[2])
            {
                d = a[2] - a[1];
                a[moc] = a[2] + d;
                cout << a[moc];
            }
            else if(sqrt(a[4] / a[2]) * a[1] == a[2])
            {
                d = a[2] / a[1];
                a[moc] = a[2] * d;
                cout << a[moc];
            }
            else
            {
                cout << -1;
            }
        }
        else if(moc == 4)
        {
            if(a[1] + a[3] == 2*a[2])
            {
                d = a[3] - a[2];
                a[moc] = a[3] + d;
                cout << a[moc];
            }
            else if(a[1] * a[3] == a[2]*a[2])
            {
                d = a[3] / a[2];
                a[moc] = a[3] * d;
                cout << a[moc];
            }
            else
            {
                cout << -1;
            }
        }
        cout << "\n";
        // cout << endl;
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