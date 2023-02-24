// #include <iostream>
// #include <math.h>
// #include <limits.h>
// using namespace std;
// int kc(int a,int b){
//     int index = 0;
//     if(a*b>0){
//         if(a<0&&b<0){
//             index = abs(abs(a)+b);
//         }
//         else index = abs(a-b);
//     }
//     else{
//         index = abs(a) + abs(b);
//     }
//     return index;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0;i<n;++i){
//         cin>>a[i];
//     }
//     for(int i = 0;i<n;++i){
//         long long max = LONG_LONG_MIN;
//         long long min = LONG_LONG_MAX;
//         for(int j = 0;j<n;++j){
//             if(j!=i){
//                 int tam = kc(a[i],a[j]);
//                 if(max<tam){
//                     max = tam;
//                 }
//                 if(min>tam){
//                     min = tam;
//                 }

//             }
//         }
//         cout<<min<<" "<<max<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n;
    cin >> n;
    int64_t a[n + 1];
    for (int64_t i = 0; i < n; i++)
        cin >> a[i];
    int min, max;
    for (int i = 0; i < n; ++i)
    {
        if (i == n - 1)
            min = abs(a[i - 1] - a[i]);
        else
            min = abs(a[i + 1] - a[i]);
        max = min;
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            int tam = abs(a[j] - a[i]);
            if (tam > max)
                max = tam;
            else if (tam < min)
                min = tam;
        }
        printf("%d %d\n", min, max);
    }
}