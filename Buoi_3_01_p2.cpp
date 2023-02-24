#include <iostream>
using namespace std;

void c1(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            while(n%i==0){
                cout<<i<<" ";
                n /= i;
            }
        }
    }
    if(n>0) cout<<n<<"\n";
}
void c2(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            cout<<i<<" ";
            while(n%i==0){
                n /= i;
            }
        }
    }
    if(n>0) cout<<n<<"\n";
}
void c3(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            int dem = 0;
            cout<<i;
            while(n%i==0){
                ++dem;
                n /= i;
            }
            cout<<"("<<dem<<")"<<" ";
        }
    }
    if(n>0) cout<<n<<"(1)"<<"\n";
}
void c4(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            while(n%i==0){
                cout<<i<<"x";
                n /= i;
            }
        }
    }
    if(n>0) cout<<n<<"\n";
}
void c5(int n){
    for(int i = 2;i*i<=n;++i){
        if(n%i==0){
            int dem = 0;
            cout<<i;
            while(n%i==0){
                ++dem;
                n /= i;
            }
            
            cout<<"^"<<dem<<"*";
        }
    }
    if(n>0) cout<<n<<"^1"<<"\n";
}
int main(){
    int n;
    cin>>n;
    c1(n);
    c2(n);
    c3(n);
    c4(n);
    c5(n);
}
