#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0;i<n;++i){
        if(a[i]%2==0) cout<<a[i]<<" ";
    }
    for(int i = n-1;i>=0;--i){
        if(a[i]&1) cout<<a[i]<<" ";
    }
}