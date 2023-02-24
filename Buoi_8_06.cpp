#include <iostream>
using namespace std;
void kt(char* str){
    int mt[123] = {0};
	for(int i = 0;str[i]!='\0';++i){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            ++mt[str[i]];
        }
	}
    for(int i = 65;i<=122;++i){
        if(mt[i]>0){
            while (mt[i]--)
            {
                cout<<(char)i;
            }
            
        }
    }
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    kt(str);
}