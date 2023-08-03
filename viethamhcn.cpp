#include<bits/stdc++.h>
using namespace std;
//khai bao nguyen mau ham _ khong can theo thu tu ham
int hcn(int, int);
void B();
void A();
// viet ham tinh dien tich HCN voi tham so dai va rong

int hcn(int dai, int rong){
	int kq = dai * rong;
	return kq;
}

int main(){
	int a, b; cin >> a >> b;
	int res = hcn(a,b);// goi ham = return kq;
	cout<< res << endl;	
	return 0;
}