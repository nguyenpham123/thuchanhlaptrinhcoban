#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct NHANVIEN {
    int MaNV;
    string Hoten;
    string Diachi;
    bool CanBoQuanLy;
};
void nhapNhanVien(NHANVIEN& nv) {
    cout<<"Nhap thong tin nhan vien:"<<endl;
    cout<<"MaNV: ";
    cin>>nv.MaNV;
    cout<<"Ho ten: ";
    cin.ignore();
    getline(cin, nv.Hoten);
    cout<<"Dia chi: ";
    getline(cin, nv.Diachi);
    cout<<"La can bo quan ly (1: Co, 0: Khong): ";
    cin>>nv.CanBoQuanLy;
}
void nhapDanhSachNhanVien(vector<NHANVIEN>& danhSachNV, int n){
    for (int i=0;i<n;i++){
        NHANVIEN nv;
        nhapNhanVien(nv);
        danhSachNV.push_back(nv);
    }
}
void inCBQL(const vector<NHANVIEN>& danhSachNV){
    cout<<"Danh sach cac nhan vien la can bo quan ly:" << endl;
    for (const NHANVIEN& nv : danhSachNV){
        if (nv.CanBoQuanLy) {
            cout<<nv.Hoten<<endl;
        }
    }
}
int main() {
    int n;
    cout<<"Nhap so luong nhan vien: ";
    cin>>n;
    vector<NHANVIEN> danhSachNhanVien;
    nhapDanhSachNhanVien(danhSachNhanVien, n);
    inCBQL(danhSachNhanVien);
    return 0;
}