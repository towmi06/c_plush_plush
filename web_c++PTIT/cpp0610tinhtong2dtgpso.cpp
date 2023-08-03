#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class pso{
	public:
	ll t,m;
	pso(ll a=0,ll b=1){
		t=a;m=b;
	}
	void rutgon(){
		ll k=__gcd(t,m);
		t/=k;
		m/=k;
	}
	friend istream &operator>>(istream &input,pso &a){
		cin >> a.t >> a.m;
		return input;
	}
	friend ostream &operator<<(ostream &output,pso a){
		cout<<a.t<<"/"<<a.m;
		return output;
	}
	pso operator + (pso b){
		pso a;
		a.t = t * b . m + m * b . t;
		a.m = m * b.m;
		a.rutgon();
		return a;
	}
};

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("outtput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	pso p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}