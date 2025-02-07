#include <bits/stdc++.h>

using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mx 1000000
int mod = 1000000007;
#define TEST 0

int n, s, c[20], c1[50], c2[50];

void Try(int x){
	if(x == n+1)
    {
		s++;
		return;
	}
	for(int i = 1; i <= n; i++)
    {
		if(c[i] == 0 && c1[i+x] == 0 && c2[x-i+n] == 0)
        {
			c[i] = 1;
			c1[i+x] = 1;
			c2[x-i+n] = 1;
			Try(x+1);
			c[i] = 0;
			c1[i+x] = 0;
			c2[x-i+n] = 0;
		}
	}
}

inline void solution()
{
	s = 0;
	for(int i = 0; i < 20; i++) c[i] = 0;
	for(int i = 0; i < 50; i++){
		c1[i] = 0;
		c2[i] = 0;
	}
	cin >> n;
	Try(1);
	cout << s;
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