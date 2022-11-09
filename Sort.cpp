#include"Sort.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


void hoanVi(SV& a, SV& b)
{
	SV c;
	c = a;
	a = b;
	b = c;

}


void sapXepTheoHoTen(SV ds[], int slsv) {
	int i, j;

	for (i = 0; i < slsv - 1; i++) {
		for (j = slsv - 1; j > i; j--) {
			// strcmp ham so sanh 2 chuoi return (0 -> chuoi1 = chuoi2), return (>0 -> 2 chuoi1 > chuoi2), return (<0 -> 2 chuoi1 < chuoi2)
			if (strcmp(_strupr(ds[i].ten), _strupr(ds[j].ten)) < 0) {
				hoanVi(ds[i], ds[j]);
			}
		}
	}
	printf("\n\t\t\tDANH SACH SINH VIEN SAU KHI SAP XEP HO TEN");
	xuatDanhSachSinhVien(ds, slsv);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
static void sapXepTheoNamSinhTuThapDenCao(SV* ds, int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].namSinh > ds[j].namSinh) {
				hoanVi(ds[i], ds[j]);
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}



static void sapXepTheoNamSinhTuCaoDenThap(SV* ds, int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].namSinh < ds[j].namSinh) {
				hoanVi(ds[i], ds[j]);
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}


void sapXepTheoNamSinh(SV* ds, int slsv) {
	int luachon;
	do
	{
		printf("\nNhap 0 sap xep tu cao den thap");
		printf("\nNhap 1 sap xep tu thap den cao");
		printf("\nBan chon kieu sap xep nao: ");
		scanf_s("%d", &luachon);

	} while (luachon < 0 || luachon > 1);  // đúng thì vòng lại thực hiện sai thì thoát khỏi do-while

	switch (luachon)
	{
	case 0:
		printf("\n\t\t\tDANH SACH SINH VIEN SAU KHI SAP XEP NAM SINH");
		sapXepTheoNamSinhTuCaoDenThap(ds, slsv);
		break;
	case 1:
		printf("\n\t\t\tDANH SACH SINH VIEN SAU KHI SAP XEP NAM SINH");
		sapXepTheoNamSinhTuThapDenCao(ds, slsv);
		break;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
static void sapXepTheoDiemDauVaoTuThapDenCao(SV* ds, int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].diemDauvao > ds[j].diemDauvao) {
				hoanVi(ds[i], ds[j]);
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}



static void sapXepTheoDiemDauVaoTuCaoDenThap(SV* ds, int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].diemDauvao < ds[j].diemDauvao) {
				hoanVi(ds[i], ds[j]);
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}


void sapXepTheoDiemDauVao(SV* ds, int slsv) {
	int luachon;
	do
	{
		printf("\nNhap 0 sap xep tu cao den thap");
		printf("\nNhap 1 sap xep tu thap den cao");
		printf("\nBan chon kieu sap xep nao: ");
		scanf_s("%d", &luachon);

	} while (luachon < 0 || luachon > 1);  // đúng thì vòng lại thực hiện sai thì thoát khỏi do-while

	switch (luachon)
	{
	case 0:
		printf("\n\t\t\tDANH SACH SINH VIEN SAU KHI SAP XEP DIEM DAU VAO");
		sapXepTheoDiemDauVaoTuCaoDenThap(ds, slsv);
		break;
	case 1:
		printf("\n\t\t\tDANH SACH SINH VIEN SAU KHI SAP XEP DIEM DAU VAO");
		sapXepTheoDiemDauVaoTuThapDenCao(ds, slsv);
		break;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
static void sapXepTheoDiemTichLuyTuThapDenCao(SV* ds, int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].diemTichluy > ds[j].diemTichluy) {
				hoanVi(ds[i], ds[j]);
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}



static void sapXepTheoDiemTichLuyTuCaoDenThap(SV* ds, int slsv) {

	int i, j;
	for (i = 0; i < slsv - 1; i++) {
		for (j = i + 1; j < slsv; j++) {
			if (ds[i].diemTichluy < ds[j].diemTichluy) {
				hoanVi(ds[i], ds[j]);
			}
		}
	}
	xuatDanhSachSinhVien(ds, slsv);
}


void sapXepTheoDiemTichLuy(SV* ds, int slsv) {
	int luachon;
	do
	{
		printf("\nNhap 0 sap xep tu cao den thap");
		printf("\nNhap 1 sap xep tu thap den cao");
		printf("\nBan chon kieu sap xep nao: ");
		scanf_s("%d", &luachon);
	} while (luachon < 0 || luachon > 1);  // đúng thì vòng lại thực hiện sai thì thoát khỏi do-while

	switch (luachon)
	{
	case 0:
		printf("\n\t\t\tDANH SACH SINH VIEN SAU KHI SAP XEP DIEM TICH LUY");
		sapXepTheoDiemTichLuyTuCaoDenThap(ds, slsv);
		break;
	case 1:
		printf("\n\t\t\tDANH SACH SINH VIEN SAU KHI SAP XEP DIEM TICH LUY");
		sapXepTheoDiemTichLuyTuThapDenCao(ds, slsv);
		break;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
