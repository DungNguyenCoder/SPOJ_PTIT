#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long d1,d2,d3;
    cin >> d1 >> d2 >> d3;
    long long s;
    if (d1 + d2 < d3)
    {
        s = 2 * (d1 + d2);
    }
    else if (d1 + d3 < d2)
    {
        s = 2 * (d1 + d3);
    }
    else if (d2 + d3 < d1)
    {
        s = 2 * (d2 + d3);
    }
    else 
    {
        s = d1 + d2 + d3;
    }
    cout << s;
}