#include<bits/stdc++.h>
using namespace std;
int ok=0;
int b[11],n;
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		b[i]=i;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
	cout<<" ";
}
void sinh(){
	int i=n;
	while(b[i]>b[i+1]){
		i--;
	}	
	if(i==0)ok=1;
	else{
		int j=n;
		while(b[j]<b[i])j--;
		int temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		int l=i+1,r=n;
		while(l<r){
			int temp1=b[l];
			b[l]=b[r];
			b[r]=temp1;
			l++;r--;
		}
    }
}
main(){
	int test;cin>>test;
	while(test--){
		ok=0;
		init();
		while(!ok){
			in();		
			sinh();
		}
		cout<<endl;
	}	
}
