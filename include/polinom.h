// класс Полином - упорядоченный односвязный список Мономов
// поддерживает операции Печать, Вставка монома, Удаление монома,  
// Поиск монома, Сложение полиномов(слияние упорядоченных списков), 
// Умножение полиномов
#ifndef __POLINOM_H__
#define __POLINOM_H__

#include "monom.h"
#include <iostream>
using namespace std;

class Polinom
{
	public:
		Monom * Value;	     // Моном-данные одного звена
		Polinom * Next;   // Указатель на следующий
		Polinom * Head;   // Голова списка

		Polinom ();	                                //конструктор инициализатор
		Polinom (const Polinom &p);                 //конструктор копирования
		~Polinom();                               //деструктор

		
		friend ostream& operator<<(ostream &out, const Polinom &p); // вывод
  
};
#endif