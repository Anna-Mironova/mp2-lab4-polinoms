// ����� ������� - ������������� ����������� ������ �������
// ������������ �������� ������, ������� ������, �������� ������,  
// ����� ������, �������� ���������(������� ������������� �������), 
// ��������� ���������
#ifndef __POLINOM_H__
#define __POLINOM_H__

#include "monom.h"
#include <iostream>
using namespace std;

class Polinom
{
	public:
		Monom * Value;	     // �����-������ ������ �����
		Polinom * Next;   // ��������� �� ���������
		Polinom * Head;   // ������ ������

		Polinom ();	                                //����������� �������������
		Polinom (const Polinom &p);                 //����������� �����������
		~Polinom();                               //����������

		
		friend ostream& operator<<(ostream &out, const Polinom &p); // �����
  
};
#endif