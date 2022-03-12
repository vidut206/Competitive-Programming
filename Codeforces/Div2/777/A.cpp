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

int t;

signed main() {
	fast_cin();
	
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n == 1 || n == 2) {
			cout << n << "\n";
			continue;
		}
/*		else if (n == 3) {
			cout << 21 << "\n";
			continue;
		}*/
		else {
			for(int i = n; i  >= 1; --i) {
				int d = n - i;
				if(d >= i/2) {
					if(i - d < i/2) continue;
					
					vector<int> res(i, 1);
					
					if(d < i/2 || (d == i/2 && (i&1))) {
						for(int j = 1; j < i; j += 2) {
							res[j]++;
						}
					}
					else {
						for(int j = 0; j < i; j += 2) {
							res[j]++;
						}
					}
					for(auto x : res) cout << x;
					break;
				}
			}
		}
		cout << "\n";
	}
	
	
	#ifndef LOCAL_DEFINE
    cerr << "\nTime elapsed: " << 1.0 * (double)clock() / CLOCKS_PER_SEC << " s.\n ";
    #endif
	
	return 0;
}