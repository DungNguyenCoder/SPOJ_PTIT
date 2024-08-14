#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

inline void solution()
{
    ll l1, r1, l2, r2 ,k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if (l1 >= l2 && r2 >= r1)
	{
		if (k <= r1 && k >= l1)
			cout << r1 - l1;
		else
			cout << r1 - l1 + 1;
	}
	else if (l2 >= l1 && r1 >= r2)
	{
		if (k <= r2 && k >= l2)
			cout << r2 - l2;
		else
			cout << r2 - l2 + 1;
	}
	else if (l2 >= l1 && r2 >= r1 && r1 >= l2)
	{
		if (k >= l2 && k <= r1)
			cout << r1 - l2;
		else
			cout << r1 - l2 + 1;
	}
	else if (l1 >= l2 && r1 >= r2 && r2 >= l1)
	{
		if (k >= l1 && k <= r2)
			cout << r2 - l1;
		else
			cout << r2 - l1 + 1;
	}
	else
		cout << 0;}

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