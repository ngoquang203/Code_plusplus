#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    int x = ceil(a);
    int y = ceil(b);
    if(a>=x&&b>=y) cout<<b-a+1;
    else if(a<y&&b==y) cout<<y-x+1;
    else cout<<y-x;
}