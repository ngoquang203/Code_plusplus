#include <iostream>
using namespace std;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i = 0;i<a;++i){
            cin>>arr[i];
            
        }
        int tam = 0;
        for(int i = 0;i<a;++i){
            for(int j = i + 1;j<a;++j){
                if(arr[i]+arr[j]<b) ++tam;
            }
        }
        cout<<tam<<endl;
    }
}