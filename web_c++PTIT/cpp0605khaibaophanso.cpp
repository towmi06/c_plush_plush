#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class PhanSo{
	public:
	long long tu,mau;
	PhanSo(ll a,ll b){
	    tu=a;
		mau=b;
	};   
    void rutgon(){
		ll k=__gcd(tu,mau);
        tu/=k;
		mau/=k;
	}
	friend istream &operator>>(istream &input,PhanSo &A){ 
        input>>A.tu>>A.mau;
        return input;            
    }
    friend ostream &operator<<(ostream &output,PhanSo &A){ 
        output<<A.tu<<"/"<<A.mau;
        return output;            
    }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}