#include<bits/stdc++.h>
using namespace std;
// node no luu ca 1 cai bang -> kieu du lieu mk tu dat ra -> con tro 
struct node {
	int a, b, c, d, e, f;
};
bool kt(node n, node m){
	return (n.a == m.a && n.b == m.b && n.c == m.c && n.d == m.d && n.e == m.e && n.f== m.f );
	
}
void xuli(){
	node n, m;
	cin >> n.a >> n.b >> n.c >> n.d >> n.e >> n.f;
	cin >> m.a >> m.b >> m.c >> m.d >> m.e >> m.f;
	// ktra xem nos co giong nhau k 
	if(kt(n, m)) {
		cout << 0<<endl;// k phai xoay nua
		return;
	}
	queue<pair<node,int>>q;
	// Th co so node n = 0;
	q.push({n,0});
	while(q.size()){
		node x = q.front().first;
		int d = q.front().second;
		q.pop();if(kt(x, m)) {
			cout << d<< endl;
			return ;
		}
		// xoay trai
		node k ;
		k.c = x.a; k.f = x.f;
		k.a = x.d; k.b = x.a;
		k.d = x.e; k.e = x.b;
		if(kt(k, m)){
			cout << d+1 << endl;
			return ;
		}
		// xoay phai
			k.c = x.b; k.f = x.c;
			k.a = x.a; k .b = x.e;
			k.d = x.d; k.e = x.f;
			if(kt(k,m)){
				cout << d+1<< endl;
				return ;
			} 
		q.push({k,d+1});	
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		xuli();
	}
}