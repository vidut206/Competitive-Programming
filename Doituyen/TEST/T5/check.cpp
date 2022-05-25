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
const int MAXN1 = 1e5+5;
const int MAXN2 = 1e6+5;
const int inf = 1e18;

int n;
int l,r,x,y;

int calc(int val) {
	int cntx = 0, cnty = 0;
	while(val) {
		cntx += (val%10 == x);
		cnty += (val%10 == y);
		
		val /= 10;
	}
	
	return cntx*cnty;
}

signed main() {
	fast_cin();
	
	int t;
	cin >> t;
	while(t--) {
		cin >> l >> r >> x >> y;
		int res = 0;
		for(; l <= r; ++l) {
			res = max(res, calc(l));
		}
		
		cout << res << "\n";
	}
	
	#ifndef LOCAL_DEFINE
    cerr << "\nTime elapsed: " << 1.0 * (double)clock() / CLOCKS_PER_SEC << " s.\n ";
    #endif
	
	return 0;
}