#include <iostream>
using namespace std;
int lengt(char* str){
    int dem = 0;
    for(int i = 0;str[i]!='\0';++i) ++dem;
    return dem-1;
}
int kt(char* str){
    int lengtstr = lengt(str);
    for(int i = 0;i<lengtstr/2;++i){
		if(str[i]!=str[lengtstr-i-1]) return 0;;
	}
    return 1;
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    if(kt(str)) cout<<"YES";
    else cout<<"NO";
}
