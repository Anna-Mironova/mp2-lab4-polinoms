#include "polinom.h"

Polinom :: Polinom ()//конструктор инициализатор
{
	Next=NULL;
}    

Polinom :: Polinom (const Polinom &p) //конструктор копирования
{
	Head=p.Head;
	Value=p.Value;
	Next=p.Next;
}

Polinom :: ~Polinom() //деструктор
{
}

std :: ostream& operator<<(ostream &out, const Polinom &p) // вывод
{
	Polinom * tmp = &p;
	while(tmp!=NULL)
	{
		out << tmp->Value << ' + ';
		tmp=tmp->Next;
	}
	out<< endl;
	return out;
}