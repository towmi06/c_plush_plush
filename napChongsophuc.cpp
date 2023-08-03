#include<bits/stdc++.h>
using namespace std;

class sophuc {
	private: 
		int thuc, ao;
		static int cnt; // thuoc ve class, cac dtg cua class chg bien nay
		// co the la ham static -> khai baos -> goi -> ten lopw + toan tu pham vi
	public:
		sophuc(int thuc, int ao){
			this->thuc = thuc;
			this ->ao = ao;
		}
		static int getCnt(){
			return cnt++;
		}
		// c1:
		sophuc operator + (sophuc a){ /* a : y*/
			sophuc tong(0,0);
			tong.thuc = this->thuc /*  dong vtro la x*/+ a.thu /* dong vai tro la y*/c;
			tong.ao = this ->ao + a.ao;
			return tong;
		}
		// c2: sd ham ban
		// nap chong toan tu nhap >>
		friend ostream & operator >> (istream &in, sophuc &a){
			in >> a.thuc >> a.ao;
			return in;
		}
		friend ostream & operator <<(ostream &out /* dat ten vai tro nhu cout*/, sophuc a){
			out<< a.thuc << ' '<< a.ao << endl;
			return out;
		}
		friend sophuc operator + (sophuca, sophuc b){
			
		}
		void in(){
			cout << this -> thuc << ' '<< this -> ao << endl;
		}
};

// khoi tao bien static ben ngoai class
int sophuc :: cnt = 0
int main(){
	/*c1
	sophuc x(2,5), y(3,4);
	sophuc z = x + y;
	z.in();
	*/
	sophuc a;
	cin >> a;
	cout << a;
}