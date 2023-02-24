#include <iostream>
using namespace std;
void kt(char* str){
    for(int i = 0;str[i]!='\0';++i){
        if(str[i]!=' '){
            cout<<str[i];
            if(str[i+1]==' ') cout<<endl;
        }
    }
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    kt(str);
}
