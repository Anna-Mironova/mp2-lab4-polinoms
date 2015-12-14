#include "monom.h"

Monom::Monom(double c , int deg) //����������� �������������
{
		Coeff=c;
		Degree=deg;
} 

Monom::Monom(const Monom &m) //����������� �����������
{
	Coeff=m.Coeff;
	Degree=m.Degree;
} 

Monom::~Monom() //����������
{}

Monom& Monom::operator=(const Monom &m)// ������������
{
	if(this == &m)
		return *this;
	Coeff=m.Coeff;
	Degree=m.Degree;
	return *this;
} 
std::ostream& operator<<(ostream &out, const Monom &m) //�����
  {
	  out << '( ' << m.Coeff << ' , ' << m.Degree << ' )'<<endl;
    return out;
  }