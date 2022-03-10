// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main()
{
    faster();
    int t = 1, n, s;
    //cin >> t;
    while(t--)
    {
        cin >> s >> n;
        int a[n + 1];
        for(int i = 1; i <= n; ++i) cin >> a[i];
        vector<vector<int>> dp(n + 1, vi(s + 1, 0));
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= s; ++j)
                if(a[i] < j) dp[i][j] = max(dp[i - 1][j - a[i]] + a[i], dp[i - 1][j]);
                else dp[i][j] = dp[i - 1][j];
        cout << dp[n][s];
    }
    return 0;
}