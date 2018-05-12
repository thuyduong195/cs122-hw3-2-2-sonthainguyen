#include <iostream>	
#include <math.h>
using namespace std;
class Hinh
{
	public:
		Hinh(){}
			virtual float getDT() const = 0;
			virtual float getCV() const = 0;
};
class HinhCN: public Hinh
{
	private:
		float CD;
		float CR;
	public:
		HinhCN():CD(0.0), CR(0.0){}
		HinhCN(float a, float b)
		{
			this->CD = a;
			this->CR = b;	
		}
		void setCD(float a)
		{
			this-> CD = a;
		}
		float getCD() const
		{
			return CD;
		}
		void setCR(int b)
		{
			this-> CR = b;
		}
		float getCR() const
		{
			return CR;
		}
		float getDT() const
		{
			return this->CD*this->CR;
		}
		float getPerimeter() const
		{
			return (this->CD+this->CR)*2;
		}
};
int main()
{
	Hinh *abc = new HinhCN(5 ,6);
	cout<<abc->getDT()<<endl;	
	return 0;
}