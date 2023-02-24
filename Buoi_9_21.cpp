#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        int a[m];
        for (int i = 0; i < m; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            for (int j = i + 1; j < m; ++j)
            {
                if (a[i] < a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i = 0;i<m/2;++i){
            cout<<a[i]<<" "<<a[m-i-1]<<" ";
        }
        if(m&1) cout<<a[m/2]<<" ";
        cout<<endl;
    }
}