#include <iostream>
using namespace std;
void chuthuong(char* str){
    int mt[123] = {0};
	for(int i = 0;str[i]!='\0';++i){
		if(str[i]){
            ++mt[str[i]];
        }
	}
    for(int i = 65;i<=122;++i){
        if(mt[i]>0) cout<<(char)i<<" "<<mt[i]<<endl;
    }
	
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    chuthuong(str);
}