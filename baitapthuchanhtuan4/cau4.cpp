#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;
void loaitrungnhau(int a[], int &n) {
    int b=0;
    for (int i=0;i<n;i++) {
        bool trungnhau = false;
        for (int j=0; j<b;j++) {
            if (a[i] == a[j]) {
                trungnhau = true;
                break;
            }
        }
        if (!trungnhau) {
            a[b] = a[i];
            b++;
        }
    }
    n = b;
}
int main() {
    srand(time(nullptr));
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    int a[100];
    for (int i=0;i<n;i++) {
        a[i] = rand() % 100 + 1;
    }
    sort(a, a+n);
    cout<<"Mang sau khi sap xep: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    loaitrungnhau(a, n);
    cout<<"Mang sau khi loai bo phan tu trung nhau: ";
    for (int i=0;i<n;i++) {
        cout <<a[i]<< " ";
    }
    cout<<endl;
    return 0;
}