    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    #define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define mx 1000000
    #define mod 100000007
    #define TEST 0

    void solution()
    {
        int n,m;
        cin >> n >> m;
        int a[n];
        int am = 0, duong = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)   ++duong;
            else    ++am;
        }
        int l,r;
        while(m--)
        {
            cin >> l >> r;
            if(l == r)
                cout << 0;
            else if((r-l+1)%2)
                cout << 0;
            else if((r-l+1)%2 == 0)
            {
                int d = (r-l+1)/2;
                if(am >= d && duong >= d)
                    cout << 1;
                else
                    cout << 0;
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