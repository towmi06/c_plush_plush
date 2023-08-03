#include <bits/stdc++.h>
using namespace std;

int main(){
    float x, y, z, t; cin >>  x >> y >> z >> t ;
    double sum = (x + y + z*2 + t*3) / 7;
    if(sum >= 8) {
        cout << "GIOI" ;
    } else 
    if (sum <8 && sum >= 6.5){
        cout << "KHA";
    } else 
    if (sum < 6.5 && sum >= 5){
        cout <<"TRUNG BINH";
    } else  
        if (sum < 5)    cout <<"YEU";
    return 0;
} 