#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;
using namespace std;

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target ("avx")

typedef long long ll;
typedef long double ld;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define Confundo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define minheap priority_queue<int,vector<int>,greater<int>>
#define print2d(dp,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<dp[i][j]<<" ";cout<<"\n";}
#define ftt int t;cin>>t;for(int tt=1;tt<=t;++tt)
#define Sum(v) accumulate(v.begin(),v.end(),(ll)0)
#define Rev(v) reverse(v.begin(),v.end());
#define Sort(v) sort(v.begin(),v.end());
#define Input(v) for(auto &x:v) cin>>x;
#define Output(v) for(auto x:v) cout<<x<<" ";
#define mem(a, b) memset(a, b, sizeof(a))
#define dbgx(x) cout<<"\nhi "<<x<<"\n"
#define double long double
#define int long long
#define maxheap priority_queue<int>
#define dbg cout<<"\nhi\n"
#define sayy cout<<"YES\n"
#define sayn cout<<"NO\n"
#define pii pair<int,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define snd second
#define fst first
#define endl "\n"

const int INF    = numeric_limits<int>::max() / 2;
const double PI  = 3.1415926535898;
const int MOD    = 1e9 + 7;
const int LIM    = 2e6 + 5;

// O(log y)
int fpow(int x, int y) {
    int temp;
    if (y == 0)
        return 1;
    temp = fpow(x, y / 2);
    if (y % 2 == 0)
        return (temp * temp) % MOD;
    else
        return (x * ((temp * temp) % MOD)) % MOD;
}

// O(log max(a, b))
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{

    return;
}


//*************************************************************************************************************************


int32_t main()
{
    Confundo;

    ftt
    {
        solve();
    }

    return 0;
}
