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

int t,n;
int a[55];
bool ok[55];

signed main() {
	fast_cin();
	
	cin >> t;
	while(t--) {
		cin >> n;
		memset(ok, 0, sizeof ok);
		
		for(int i=1;i<=n;++i) {
			cin >> a[i];	
		}
		
		sort(a+1,a+n+1);
		for(int i=1;i<=n;++i) {
			if(a[i] <= n && ok[a[i]] == 0) {
				ok[a[i]] = 1;
			}
			else {
				a[i] >>= 1;
				while(a[i]) {
					if(a[i] <= n && ok[a[i]] == 0) {
						ok[a[i]] = 1;
						break;
					}
					a[i] >>=1;
				}
			}
		}
		bool res = 1;
		for(int i=1;i<=n;++i) res &= ok[i];
		cout << (res ? "YES\n" : "NO\n");
	}
	
	
	
	#ifndef LOCAL_DEFINE
    cerr << "\nTime elapsed: " << 1.0 * (double)clock() / CLOCKS_PER_SEC << " s.\n ";
    #endif
	
	return 0;
}