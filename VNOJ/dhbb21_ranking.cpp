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
const int MAXN1 = 2e3+5;
const int MAXN2 = 1e6+5;
const int inf = 1e18;


int n;
pii a[MAXN1];

int findbest(int id) {
	vector<int> p;
	vector<int> cur;
	
}


int findworst(int id) {
	
}

signed main() {
	fast_cin();
	
	
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i].fi;
	for(int i = 1; i <= n; ++i) cin >> a[i].se;
	
	
	for(int i = 1; i <= n; ++i) {
		int res1 = findbest(i);
		int res2 = findworst(i);
		
		cout << res1 << " " << res2 << '\n';
	}
	
	
	
	#ifndef LOCAL_DEFINE
    cerr << "\nTime elapsed: " << 1.0 * (double)clock() / CLOCKS_PER_SEC << " s.\n ";
    #endif
	
	return 0;
}