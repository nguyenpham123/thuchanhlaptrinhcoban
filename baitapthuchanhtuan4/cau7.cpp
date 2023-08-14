#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    double a[100];
    cout<<"Nhap cac phan tu cua mang: ";
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    map<double, int> freq;
    for (int i=0;i<n;i++) {
        freq[a[i]]++;
    }
    double mode = a[0];
    int maxFreq = 0;
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            mode = it.first;
        }
    }
    cout<<"Phan tu xuat hien nhieu nhat trong mang: " <<mode<< " (xuat hien " <<maxFreq<< " lan)"<<endl;
    double x;
    cout<<"Nhap mot so thuc x: ";
    cin>>x;
    int pos = -1;
    for (int i=0;i<n;i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        cout<<"So "<<x<< " xuat hien tai vi tri " <<pos<< " trong mang."<<endl;
    } else {
        int insertPos = upper_bound(a, a + n, x) - a;
        for (int i=n;i>insertPos;i--) {
            a[i] = a[i - 1];
        }
        a[insertPos] = x;
        n++;
        cout<<"Mang sau khi chen " <<x<< " va sap xep tang dan: ";
        for (int i=0;i<n;i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}