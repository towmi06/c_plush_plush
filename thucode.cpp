#include<bits/stdc++.h>

using namespace std;
void n1(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
}
void n2(int n){
    cout <<  n <<' ';
    while(n--){
        cout << n <<' ';
    }
}
void n3(int n){
    for(int i=0; i<= n; i++){
        cout << i <<" ";
        i++;
    }
}
void n4(int n){
    for(int i = 1; i<=n; i++){ 
        cout << i << " ";
        i++;
    }
}
void n5(int n){
        for(int i = 0; i<= n; i++){
        if(i % 4 == 0){
            cout << i <<" ";
        }
    }
}
void n6(int n){
    for(int i = 1; i <= n; i++){
        char c = 'a';
        c = i +96;
        cout << c <<' ';
    }
}
void n7(int n){
    while(n--){
        char c =  'z';
        c = 122 -n;
        cout << c <<" ";
    }
}
int main(){
    int n;
    cin >> n;
     n1(n); 
     cout << endl;
     n2(n);
     cout << endl;
     n3(n);
     cout << endl;
     n4(n) ;
     cout << endl;
     n5(n);  
     cout << endl;
     n6(n);
     cout << endl;
    n7(n);
     cout << endl;
}