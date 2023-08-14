#include <iostream>
#include <algorithm>
using namespace std;
void mangsonguyen(int a[], int &n, int x) {
    int i=n-1;
    while(i>=0 && a[i]<x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i+1] = x;
    n++;
}
int main() {
    int n;
    cout<<"Nhap so luong phan tu cua mang A: ";
    cin>>n;
    int A[100];
    cout<<"Nhap cac phan tu cua mang A: ";
    for (int i=0;i<n;i++) {
        cin>>A[i];
    }
    sort(A, A+n);
    cout<<"Nhap so nguyen x: ";
    int x;
    cin>>x;
    mangsonguyen(A, n, x);
    cout<<"Mang A sau khi chen " <<x<< " va sap xep tang dan: ";
    for (int i=0;i<n;i++) {
        cout<<A[i]<< " ";
    }
    cout << endl;
    return 0;
}
