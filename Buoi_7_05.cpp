#include <iostream>
using namespace std;
void chuthuong(char* str){
    int mt[123] = {0};
	for(int i = 0;str[i]!='\0';++i){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            ++mt[str[i]];
        }
	}
    for(int i = 0;str[i]!='\0';++i){
		if(mt[str[i]]>0){
            cout<<str[i]<<" "<<mt[str[i]]<<endl;
            mt[str[i]] = 0;
        }
	}
	
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    chuthuong(str);
}