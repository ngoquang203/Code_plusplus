#include <iostream>
using namespace std;
int kt(char* str){
    int dem = 0;
    for(int i = 0;str[i]!='\0';++i){
        if(str[i]!=' '){
            if(str[i+1]==' '){
                ++dem;
            } 
            else if(str[i+1]=='\0'&&str[i-1]!=' ') ++dem;
        }
    }
    return dem;
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    cout<<kt(str);
}
