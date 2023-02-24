#include <iostream>
using namespace std;
void Interchange_Sort(long long a[], int n)
{
    long long i, j, tam = 1, tam2 = 0;
    for (i = 0; i <  n- 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]); // hoán vị a[i] và a[j]
                tam2 = 1;
            }
        }
        if (tam2 == 1)
        {
            cout << "Buoc " << tam++ << ": ";
            for (int x = 0; x < n; ++x)
            {
                cout << a[x] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    Interchange_Sort(a, n);
}
