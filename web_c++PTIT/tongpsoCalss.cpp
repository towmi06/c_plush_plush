#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

class pso {
private:
    ll tu, mau;
    ll tong;

public:
	pso(ll t = 0, ll m = 1) : tu(t),mau(m){
	}
    friend istream& operator>>(istream& input, pso& a) {
        cin >> a.tu >> a.mau;
        return input;
    }

    friend ostream& operator<<(ostream& out, pso a) {
        cout << a.tu << '/' << a.mau;
        return out;
    }

    friend pso operator+(pso b, pso c) {
        pso a;
        a.mau = c.mau * b.mau;
        a.tu = c.tu * b.mau + b.tu * c.mau;
        ll k = __gcd(a.tu, a.mau);
        a.tu /= k;
        a.mau /= k;
        return a;
    }
};

int main() {
    pso p(1,1),q(1,1);
    cin >> p >> q;
    cout << p+q;
    return 0;
}
