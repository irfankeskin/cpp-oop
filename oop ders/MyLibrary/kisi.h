#ifndef KISI_H_
#define KISI_H_
#include <iostream>
using namespace std;
class Kisiler{
	public :
	string ad;
	string soyad;
	int yas;
	Kisiler(string isim,string soyisim,int yas)
	{
		this->ad = isim;
		this->soyad = soyisim;
		this->yas = yas;
	}
	Kisiler (){ //nesne tanimlamak icin
		//ad = "";
		//soyad = "";
		//yas = 0;
	} 
	void Yazdir();//prototipler
	void Digit();
	void yuru();
	void kos();
	void uyu();
};
#endif
