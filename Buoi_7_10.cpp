#include <iostream>
using namespace std;
void chuthuong(char* str){
    int mt[123] = {0};
    for(int i = 0;str[i]!='\0';++i){
		if(str[i]>='a'&&str[i]<='z'){
            ++mt[str[i]];
        }
	}
    int dem = 0;
    for(int i = 97;i<=122;++i){
        if((mt[i]>0)){
            ++dem;
        }
    }
    if(dem==26) cout<<"YES";
    else cout<<"NO";
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    chuthuong(str);
}
