// ����� ��� ��������� ������ (double �����������, ����� ��������� �������)
#ifndef __MONOM_H__
#define __MONOM_H__

#include <iostream>
using namespace std;

class Monom
{
	public:
		double Coeff;	  // ����������� ������
		int Degree;       // ������� ����������; 1 ����� - ������� x; 2 ����� - ������� y; 3 ����� - ������� z

		Monom (double c, int deg);	            //����������� �������������
		Monom (const Monom &m);                 //����������� �����������
		~Monom();                               //����������

		Monom& operator=(const Monom &m);     // ������������
		
		friend ostream& operator<<(ostream &out, const Monom &m); // �����
  
};

#endif