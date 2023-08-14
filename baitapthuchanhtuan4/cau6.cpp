#include <iostream>
using namespace std;
int main() {
    int N, p;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>N;

    int A[200],B[100];
    cout<<"Nhap cac phan tu cua mang A: ";
    for (int i=0;i<N;i++) {
        cin>>A[i];
    }
    cout<<"Nhap cac phan tu cua mang B: ";
    for (int i=0; i<N;i++) {
        cin>>B[i];
    }
    cout<<"Nhap vi tri p muon chen mang B vao mang A: ";
    cin>>p;
    if (p>=0 && p<=N) {
        for (int i=N-1;i>=p;i--) {
            A[i+N] = A[i];
        }
        for (int i=p;i<p+N;i++) {
            A[i] = B[i-p];
        }
        cout<<"Mang A sau khi chen mang B vao vi tri " <<p<< " la: ";
        for (int i=0;i<2*N;i++) {
            cout<<A[i]<< " ";
        }
        cout<<endl;
    } else {
        cout<<"Nhap sai vi tri p."<<endl;
    }
    return 0;
}