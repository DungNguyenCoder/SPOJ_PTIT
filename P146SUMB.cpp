#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int k = 2 * n;
    vector<string> a(n + 1);
    for (int i = 0; i <= n; i++)
    {
        a[i].insert(0, k, ' ');
        k -= 2;
        for (int j = 0; j <= i; j++)
        {
            char h = j + '0';
            a[i].push_back(h);
            a[i].push_back(' ');
        }
        for (int j = i - 1; j >= 0; j--)
        {
            char h = j + '0';
            a[i].push_back(h);
            a[i].push_back(' ');
        }
        while (a[i][a[i].size() - 1] == ' ')
            a[i].erase(a[i].size() - 1);
    }
    for (int i = n - 1; i >= 0; i--)
        a.push_back(a[i]);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
        if (i < a.size() - 1)
            cout << endl;
    }
}