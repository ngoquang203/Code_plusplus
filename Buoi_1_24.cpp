#include <iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>='a'&&x<'z'){
        cout<<(char)(x+1);
    }
    else if(x>='A'&&x<'Z'){
        cout<<(char)(x+33);
    }
    else if(x=='Z') cout<<'a';
    else if(x=='z') cout<<'a';
    else cout<<"INVALID";
}