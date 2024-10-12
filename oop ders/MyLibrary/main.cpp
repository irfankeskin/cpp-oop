#include "kisi.h"
int main()
{
	Kisiler nesne1;
	nesne1.ad = "irfan";
	nesne1.soyad = "keskin";
	nesne1.yas = 22;
	nesne1.Digit();
	nesne1.Yazdir();
	nesne1.kos();
	nesne1.uyu();
	nesne1.yuru();
	cout << endl;
	cout << "\\********************************************************/" << endl;
	cout << endl;
	Kisiler *nesne2 = new Kisiler ("IRFAN","KESKIN",6);
	nesne2->Digit();
	nesne2->Yazdir();
	nesne2->kos();
	nesne2->uyu();
	nesne2->yuru();
	delete nesne2;
	cout << endl;
	cout << "\\********************************************************/" << endl;
	cout << endl;
}
