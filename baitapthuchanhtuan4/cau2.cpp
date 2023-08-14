#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu cua mang A: ";
    cin>>n;
    int A[100];
    cout << "Nhap cac phan tu cua mang A: ";
    for (int i=0;i<n;i++) {
        cin>>A[i];
    }
    int x;
    cout<<"Nhap so nguyen x: ";
    cin>>x;
    bool found = false;
    int count = 0;
    for (int i=0;i<n;i++) {
        if (A[i] == x) {
            found = true;
            count++;
            for (int j=i;j<n-1;j++) {
                A[j] = A[j+1];
            }
            i--;
            n--;
        }
    }
    if (found) {
        cout<<"So "<<x<< " co trong mang A. Xuat hien " <<count<< " lan."<<endl;
        cout<<"Mang A sau khi xoa cac phan tu "<<x<<": ";
        for (int i = 0; i < n; i++) {
            cout<<A[i]<<" ";
        }
        cout<<endl;
    } else {
        cout<<"So "<<x<< " khong co trong mang A."<<endl;
    }
    return 0;
}