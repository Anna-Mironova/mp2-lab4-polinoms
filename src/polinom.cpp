#include "polinom.h"

Polinom :: Polinom ()//����������� �������������
{
	Next=NULL;
}    

Polinom :: Polinom (const Polinom &p) //����������� �����������
{
	Head=p.Head;
	Value=p.Value;
	Next=p.Next;
}

Polinom :: ~Polinom() //����������
{
}

std :: ostream& operator<<(ostream &out, const Polinom &p) // �����
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