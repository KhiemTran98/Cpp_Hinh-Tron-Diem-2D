#include<iostream>
#include<conio.h>
#include"CHinhTron.h"
using namespace std;
void main()
{
	//CHinhTron *ht = new CHinhTron();
	//cout << "Nhap hinh tron" << endl;
	//ht->Nhap();

	CDiem2D* I = new CDiem2D(0, 0);
	CHinhTron* ht = new CHinhTron(I, 0);

	cout << "\nChu vi: " << ht->TinhChuVi();
	cout << "\nDien tich: " << ht->TinhDienTich();

	delete ht;

	_getch();
}