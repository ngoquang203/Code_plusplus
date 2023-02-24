#include<bits/stdc++.h>
using namespace std;
int pt(int n){
	if(n==1) return 0;
	int max = 0;
	for(int i =2; i<= sqrt(n); i++){
		if(n%i==0){
			int dem =0;
			while(n%i == 0){
				dem++;
				n/= i;
			}
		if(dem<2) return false;
		}
		
	}
	if(n!=1)return false;
	else return true;
}

int main(){
	int n,m; cin>>n>>m;
	for(int i=n; i<=m; i++){
		if(pt(i))cout<<i<<" ";
	}
	cout<<endl;
}
