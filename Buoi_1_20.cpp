#include <iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if((x>='A'&&x<='Z')||(x>='a'&&x<='z')) cout<<"YES";
    else cout<<"NO";
}