#include <iostream>
using namespace std;
void insertionSort(int a[], int n){
    int j, x,x2 = 1;
    cout<<"Buoc 0: "<<a[0]<<endl;
    for(int i=1;i<n;i++){
         x=a[i];
         j=i;
        while(j>0 && x<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        a[j]=x;
        x2++;
        cout<<"Buoc "<<x2-1<<": ";
        for(int j = 0;j<x2;++j){
            cout<<a[j]<<" ";
        }
        cout<<endl;
        
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