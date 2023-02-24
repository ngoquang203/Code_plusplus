#include <iostream>
using namespace std;
void chuthuong(char* str,char* str1){
    int mt[123] = {0},mt1[123] = {0};
    for(int i = 0;str[i]!='\0';++i){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            ++mt[str[i]];
        }
	}
    for(int i = 0;str1[i]!='\0';++i){
		if((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='a'&&str1[i]<='z')){
            ++mt1[str1[i]];
        }
	}
    for(int i = 65;i<=122;++i){
        if((mt[i]>0&&mt1[i]==0)){
            cout<<(char)i;
        }
    }
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    char str1[1000];
    fgets(str1,sizeof(str1),stdin);
    chuthuong(str,str1);
}
