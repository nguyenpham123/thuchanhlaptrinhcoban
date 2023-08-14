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
void chenNhanVien(vector<NHANVIEN>& danhSachNV, const NHANVIEN& nv, int k){
    if (k>=0 && k<=danhSachNV.size()){
        danhSachNV.insert(danhSachNV.begin() + k, nv);
    } else {
        cout<<"Vi tri chen khong hop le."<<endl;
    }
}
int main() {
    int n;
    cout<<"Nhap so luong nhan vien: ";
    cin>>n;
    vector<NHANVIEN> danhSachNhanVien;
    nhapDanhSachNhanVien(danhSachNhanVien, n);
    NHANVIEN nvMoi;
    nhapNhanVien(nvMoi);
    int k;
    cout<<"Nhap vi tri chen nhan vien moi: ";
    cin>>k;
    chenNhanVien(danhSachNhanVien, nvMoi, k);
    cout<<"Danh sach nhan vien sau khi chen:"<<endl;
    for (const NHANVIEN& nv : danhSachNhanVien){
        cout<<"MaNV: "<<nv.MaNV<< ", Ho ten: " <<nv.Hoten<< ", Dia chi: " <<nv.Diachi
            << ", Can bo quan ly: "<<(nv.CanBoQuanLy ? "Co" : "Khong")<<endl;
    }
    return 0;
}