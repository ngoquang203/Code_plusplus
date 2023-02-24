#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,c=0;
		cin >> n;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				c+=i;
				if(i!=n/i) c+=n/i;
			} 
			
		}
		cout << c << endl;
	}
	return 0;
}