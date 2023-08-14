#include <iostream>
using namespace std;
int main() {
    int N, p, n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>N;
    int A[100];
    cout<<"Nhap cac phan tu cua mang: ";
    for (int i=0;i<N;i++) {
        cin>>A[i];
    }
    cout<<"Nhap vi tri p bat dau va so phan tu n muon xoa: ";
    cin>>p>>n;
    if (p>=0 && p<N && n>0) {
        for (int i=p;i<N-n;i++) {
            A[i]=A[i + n];
        }
        N -= n;
        cout<<"Mang A sau khi huy " <<n<< " phan tu tu vi tri " <<p<< " la: ";
        for (int i=0;i<N;i++) {
            cout <<A[i]<< " ";
        }
        cout<<endl;
    } else {
        cout<<"Nhap sai vi tri p hoac so phan tu n."<<endl;
    }
    return 0;
}