#include <iostream>
#include <cmath>
using namespace std;
bool ktstn(int num) {
    if (num<=1) {
        return false;
    }
    for (int i=2;i<=sqrt(num);i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    do {
        cout<<"Nhap so luong phan tu cua mang thoa dieu kien: ";
        cin>>n;
    } while (n<=0 || n>100);
    int a[100];
    cout<<"Nhap cac phan tu cua mang: ";
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int sumPositive = 0, sumNegative = 0;
    int countPositive = 0, countNegative = 0;
    int evenCount = 0;
    for (int i=0;i<n;i++) {
        if (a[i]>0) {
            sumPositive += a[i];
            countPositive++;
        } else if (a[i] < 0) {
            sumNegative += a[i];
            countNegative++;
        }
        if (a[i] % 2 == 0) {
            evenCount++;
        }
    }
    double averagePositive=(countPositive > 0) ? (double)sumPositive/countPositive : 0;
    double averageNegative=(countNegative > 0) ? (double)sumNegative/countNegative : 0;
    cout<<"Trung binh cong cua cac so duong trong mang: "<<averagePositive<<endl;
    cout<<"Trung binh cong cua cac so am trong mang: "<<averageNegative<<endl;
    cout<<"Cac so nguyen to trong mang: ";
    for (int i = 0; i < n; i++) {
        if (ktstn(a[i])) {
            cout<<a[i]<< " ";
        }
    }
    cout<<endl;
    cout<<"Sap xep cac so chan trong mang theo thu tu tang dan: ";
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}