#include"CDiem2D.h"
class CHinhTron
{
private:
	CDiem2D *I;
	double r;
public:
	CHinhTron();
	CHinhTron(CDiem2D* I, double r);
	~CHinhTron();
	void Nhap();
	double TinhChuVi();
	double TinhDienTich();
};