#include <iostream>
using namespace std;
void chuthuong(char* str){
    int mt[123] = {0};
	for(int i = 0;str[i]!='\0';++i){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            ++mt[str[i]];
        }
	}
    int max = 0,index = 0;
    for(int i = 0;str[i]!='\0';++i){
		if(mt[str[i]]>0){
            if(mt[str[i]]>max){
                max = mt[str[i]];
                index = (int)str[i];
            }
            else if(mt[str[i]]==max){
                if(index<(int)str[i]){
                    max = mt[str[i]];
                    index = (int)str[i];
                }
            }
            mt[str[i]] = 0;
        }
	}
	cout<<(char)index;
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    chuthuong(str);
}