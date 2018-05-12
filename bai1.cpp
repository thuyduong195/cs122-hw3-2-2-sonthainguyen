// Nguyễn Thái Sơn MSV A31174
#include <iostream>	
#include <math.h>
using namespace std;
class Hinh
{
	protected:
		float CD;
		float CR;
	public:
		Hinh(){}
		void setCD(float a)
		{
			CD = a;
		}
		void setCR(float b)
		{
			CR = b;
		}
		float getCD() const
		{
			return CD;
		}
		float getCR() const
		{
			return CR;
		}
		float DT()
		{
			return CD*CR;
		}
		float CV()
		{
			return (CD+CR)*2
		}	
};
class HinhCN: public Hinh
{
	protected:
		float cDx;
		float cRy;
	public:
		HinhCN(){}
		void setcDx(int a)
		{
			cDx = a;
		}
		float getcDx()
		{
			return cDx;
		}
		void setcRy(int b)
		{
			cRy = b;
		}
		float getcRy()
		{
			return cRy;
		}
		HinhCN operator + (HinhCN b)
		{
			HinhCN kq;
			kq.cDx = cDx;
			kq.cRy = cRy;
			kq.CD = CD + b.CR;
			kq.CR = CR + b.CR;
			return kq;
		}
		void print()
		{
			cout<<CD<<"  "<<CR<<" "<<endl;
		}
};
int main()
{
	HinhCN a, b, c;
	a.setCD(8)
	b.setCD(5)
	a.setCR(6)
	b.setCR(9)
	a.setcDx(7)
	a.setcRy(5)
	b.setcDx(8)
	b.setcRy(6)
	c = a + b;
	c.print();
	return 0;
}
