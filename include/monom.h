// класс или структура Монома (double коэффициент, целая свернутая степень)
#ifndef __MONOM_H__
#define __MONOM_H__

#include <iostream>
using namespace std;

class Monom
{
	public:
		double Coeff;	  // коэффициент монома
		int Degree;       // степени переменных; 1 цифра - степень x; 2 цифра - степень y; 3 цифра - степень z

		Monom (double c, int deg);	            //конструктор инициализатор
		Monom (const Monom &m);                 //конструктор копирования
		~Monom();                               //деструктор

		Monom& operator=(const Monom &m);     // присваивание
		
		friend ostream& operator<<(ostream &out, const Monom &m); // вывод
  
};

#endif