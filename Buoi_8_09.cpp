#include <iostream>
#include <string.h>
using namespace std;
void chuanhoa(char* str){
    str[0] = toupper(str[0]);
    for(int i = 1;i<strlen(str);++i){
        str[i] = tolower(str[i]);
    }
}
void chuanhoa1(char* str){
    for(int i = 0;i<strlen(str);++i){
        str[i] = toupper(str[i]);
    }
}
int main(){
    int n;
    cin>>n;
    getchar();
    while (n--)
    {
        char str[1000],a[1000][1000];
        int n = 0;
        gets(str);
        char* token = strtok(str," ");
        while (token != NULL){
            strcpy(a[n],token); ++n;
            token = strtok(NULL," ");
        }
        chuanhoa1(a[n-1]);
        cout<<a[n-1];
        cout<<", ";
        for(int i = 0;i<n-1;i++){
            chuanhoa(a[i]);
            cout<<a[i];
            if(i!=n-1) cout<<" ";
        }
        cout<<"\n";
    }
}