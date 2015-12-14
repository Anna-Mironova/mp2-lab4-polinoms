#include "monom.h"

Monom::Monom(double c , int deg) //конструктор инициализатор
{
		Coeff=c;
		Degree=deg;
} 

Monom::Monom(const Monom &m) //конструктор копирования
{
	Coeff=m.Coeff;
	Degree=m.Degree;
} 

Monom::~Monom() //деструктор
{}

Monom& Monom::operator=(const Monom &m)// присваивание
{
	if(this == &m)
		return *this;
	Coeff=m.Coeff;
	Degree=m.Degree;
	return *this;
} 
std::ostream& operator<<(ostream &out, const Monom &m) //вывод
  {
	  out << '( ' << m.Coeff << ' , ' << m.Degree << ' )'<<endl;
    return out;
  }