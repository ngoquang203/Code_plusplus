#include <iostream>
using namespace std;
void Buble_Sort(int a[], int n)
{
    int i, j, tam = 1;
    bool haveSwap = false;
    for (i = 0; i < n - 1; i++)
    {
        haveSwap = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                haveSwap = true;
            }
        }
        if (haveSwap == false)
        {
            break;
        }
        cout << "Buoc " << tam++ << ": ";
        for (int j = 0; j < n; ++j)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    Buble_Sort(a, n);
}