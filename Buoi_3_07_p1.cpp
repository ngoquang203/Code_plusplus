#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
    if(n<2) return 0;
    for(int i = 2;i<=sqrt(n);++i){
        if(n%i==0) return 0;
    }
    return 1;
}

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1;i<=n;++i){
//         int m;
//         cin>>m;
//         int tam = 1;
//         for(int j = 2;j<m;++j){
//             for(int z = 2;z<m;++z){
//                 if((j+z==m)&&snt(j)&&snt(z)){
//                     cout<<j<<" "<<z<<endl;
//                     tam = 0;
//                 }
//             }
//             if(tam==0) break;
//         }
//     }
//     return 0;
// }
int main(){
	int dem;cin >> dem;
	while(dem--){
	int n;
	cin >> n;
	for(int i=2;i<=n/2;i++){
		if(snt(i)==1 && snt(n-i)==1){
            cout << i << " " << n-i << endl;
            break;
        } 
    }
    }
	return 0;
}