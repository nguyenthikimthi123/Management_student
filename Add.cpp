#include "Add.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void themSinhVien( SV ds[], int& n)
{
	printf("\nNhap sinh vien muon them:");
	while (getchar() != '\n');//xoa xuong dong
	nhapSinhVien(ds[n]);
	n++;
}
