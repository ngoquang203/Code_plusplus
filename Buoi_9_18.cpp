#include <iostream>
using namespace std;
void insertionSort(int a[], int n){
    int j, x;
    for(int i=1;i<n;i++){
         x=a[i];
         j=i;
        while(j>0 && x<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        cout<<x<<" "<<j<<endl;
        a[j]=x;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    insertionSort(a,n);
    
}