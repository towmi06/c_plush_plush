#include<bits/stdc++.h>
using namespace std;

class svien{
	private :
		string ten, msv;
		double  m1, m2, m3, tongdiem;
	public :
		void nhap(){
			getline(cin, ten);
			getline(cin, msv);
			cin >> m1>> m2 >> m3;
			tongdiem = m1 + m2 + m3;
		}
		void in(){
			cout << ten << " "<< msv << " "<< fixed << setprecision(2) << tongdiem << endl;
		}
};

int main(){
	svien t;
	t.nhap();
	t.in();
}