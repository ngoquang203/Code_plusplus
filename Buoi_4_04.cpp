#include<iostream>
#include<math.h>
using namespace std;
int x,y,g; // biến toàn cục
void Euclid(long long a,long long b){
	if(b==0){
		x=1;
		y=0;
		g=a;
	}
	else{
		Euclid(b,a%b);
			int tmp=x;
			x=y;
			y=tmp-a/b*y;
		}
	}
int main(){
	long long a,b;
	cin>>a>>b;
	Euclid(a,b);
	cout<<x<<" "<<y;
}