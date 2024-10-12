#include "kisi.h"
void Kisiler::Yazdir()
{
	cout << "Ad : " << ad << endl;
	cout << "Soyad : " << soyad << endl;
	cout << "Yas : " << yas << endl;
}
void Kisiler::Digit()
{
	int i = 0;
	cout << "Rakamlar : ";
	while(i < 10)
	{
		cout << " " << i;
		i++;
	}
	cout << endl;
}
void Kisiler::kos()
{
	cout << ad << " kosuyor ..." << endl;
}
void Kisiler::uyu()
{
	cout << ad << " uyuyor ..." << endl;
}
void Kisiler::yuru()
{
	cout << ad << " yuruyor ..." << endl;
}
