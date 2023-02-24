#include <iostream>
using namespace std;
void chuthuong(char* str){
    int demchu = 0,demso = 0,demkitu = -1;
	for(int i = 0;str[i]!='\0';++i){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')) ++demchu;
        else if(str[i]>='0'&&str[i]<='9') ++demso;
        else ++demkitu;
	}
    cout<<demchu<<" "<<demso<<" "<<demkitu;
	
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    chuthuong(str);
}