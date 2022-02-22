/* 
	Author : vidut_206_CNH
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pb push_back
#define gcd(a,b) (__gcd(a,b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define sz(x) (int)(x.size())
#define fast_cin() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define db(x) cerr << "[" << "Line " << __LINE__ << " : " << (#x) << " = " << x << "] "

typedef pair<int,int> pii;

const int MOD = 1e9 + 7;
const int MAXN1 = 1e8;
const int MAXN2 = MAXN1/32 + 1;
const int inf = 1e18;

bitset<MAXN2> bit;
int t;

signed main() {
	fast_cin();
	
	cin >> t;
	while(t--) {
		int n,u,v, sum = 0;
		cin >> n >> u >> v;
		bit[0] = true;
		for(int i = 1; i <= n; ++i) {
			int x;
			cin >> x;
			sum += x;
			bit |= (bit << x);
		}
		int res = inf;
		for(int i = 0; i < sum; ++i) {
			if(bit[i]) {
				res = min(res, max((i + u - 1)/u, (sum - i + v - 1)/v));
				bit[i] = 0;
			}
		}
		
		cout << res  << "\n";
	}
	
	
	
	#ifndef LOCAL_DEFINE
    cerr << "\nTime elapsed: " << 1.0 * (double)clock() / CLOCKS_PER_SEC << " s.\n ";
    #endif
	
	return 0;
}