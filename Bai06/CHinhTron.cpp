#include<iostream>
#include"CHinhTron.h"
const double PI = 3.14159;
using namespace std;
CHinhTron::CHinhTron()
{
	I = new CDiem2D();
	r = 0;
}
CHinhTron::CHinhTron(CDiem2D* I, double r)
{
	this->I = new CDiem2D(*I);
	this->r = r;
}
CHinhTron::~CHinhTron()
{
	delete I;
}
void CHinhTron::Nhap()
{
	cout << "Tam I" << endl;
	I->Nhap();
	cout << "Ban kinh r: ";
	cin >> r;
}
double CHinhTron::TinhChuVi()
{
	return r * 2 * PI;
}
double CHinhTron::TinhDienTich()
{
	return r * r * PI;
}