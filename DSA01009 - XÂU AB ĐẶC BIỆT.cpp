#include<bits/stdc++.h>
#define mod              1000000007
#define ll               long long
#define	p(x)             pair<x,x>
#define v(x)             vector<x>
#define tree             node*
#define sz(a)            a.size()
#define f                first
#define s                second
#define pb(a)            push_back(a)
#define pf(a)            push_front(a)
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define FORX(i,l,r,x)    for(int i=l;i<r;i+=x)
#define FORD(i,l,r)      for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)          memset(M,x,sizeof(M))
#define reset()          FOR(i, 0, 1001)A[i].clear(),check[i]=false
#define faster()         cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()            int t; cin >> t; while (t--)
#define pq(x)            priority_queue<x>
#define neg_pq(x)        priority_queue<x, vector<x>, greater<x>>
#define all(M)           M.begin(),M.end()
using namespace std;

//_______________________NGUYỄN_NGỌC_TOÀN_______________________//

bool check(string s, int k) {
	int count = 1;
	int ok = 0;
	FOR(i, 1, sz(s)) {
		if (s[i - 1] == '0' && s[i] == '0')count++;
		else count = 1;
		if (count > k)return false;
		if (count == k)ok++;
	}
	if (ok == 1)return true;
	return false;
}

int main() {
	faster();
	int n, k; cin >> n >> k;
	v(string) S;
	FOR(i, 0, pow(2, n)) {
		auto s = bitset<20>(i).to_string();
		s = s.substr(20 - n, n);
		if (check(s, k)) {
			string tmp;
			for (auto c : s)(c == '1') ? tmp.pb('B'): tmp.pb('A') ;
			S.pb(tmp);
		}
	}
	cout<<sz(S)<<endl;
	for(auto s: S)cout<<s<<endl;
}

//_________________________B20DCPT173__________________________//
