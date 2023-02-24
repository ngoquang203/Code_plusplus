#include <iostream>
using namespace std;
void Selection_Sort(long long a[], int n)
{
    long long min, tam = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(a[min], a[i]);
            cout << "Buoc " << tam++ << ": ";
            for (int j = 0; j < n; ++j)
            {
                cout << a[j] << " ";
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
    Selection_Sort(a, n);
}
