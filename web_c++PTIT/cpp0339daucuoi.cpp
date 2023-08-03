#include<bits/stdc++.h> 
#include<string> 
using namespace std; 
int main(){ 
    int t; cin >> t; 
    string str; 
    while(t--){ 
        cin >> str; 
        int x = str.size(); 
        int count=0; 
        for(int i=0;i<x;i++){ 
            for(int j=i;j<x;j++){ 
                if(str[i]==str[j])  count++; 
            } 
        } 
        cout << count << endl; 
    } 
}
