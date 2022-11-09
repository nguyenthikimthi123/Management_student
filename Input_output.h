#pragma once
#ifndef INTPUT_OUTPUT__H_
#define INTPUT_OUTPUT__H_

struct SinhVien {
	char ten[50];
	int namSinh;
	char queQuan[30];
	char khoa[50];
	char nganh[60];
	float diemDauvao;
	float diemTichluy;//doi thanh dau cham tinh//ua dau cham tinh la so nguyen ma ta
};
typedef SinhVien SV;
void hamNhapchuoi(char str[]);
void hamNhapdiem(float& diem);
void hamNhapnamSinh(int& namSinh);
void nhapSinhVien(SV& sv);
void inSinhVien(SV sv);
void nhapDanhSachSinhVien(SV ds[], int& n);
void xuatDanhSachSinhVien(const SV ds[], int  n);
void nhapPhimBatKy();
//void ghiDocFile(SV ds[], int n, int wr);
void ghiVaoFile(SV ds[], int n);
void docTuFile(SV ds[], int& n);
#endif
