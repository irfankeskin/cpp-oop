#include <iostream>
using namespace std;
class Kisi{
	public :
		string ad;
		string soyad;
		int yas;
		Kisi (string isim,string soyisim,int yas ) : ad(isim), soyad(soyisim),yas(yas) 
		{
			cout << "kisi sinifinin yapici metotu calisti ..." << endl << endl;
		}
};
class Ogrenci : public Kisi{
	public:
		int ortalama;
		Ogrenci (string isim,string soyisim,int yas ,int ortalama) : ortalama(ortalama), Kisi (isim,soyisim,yas)
		{
			cout << "Ogrenci sinifinin yapici metodu calisti... " << endl << endl;
		}	
};
class Isci : public Ogrenci{
	public :
		string maas;
		Isci (string a,string b,int c,int d,string maas) : maas(maas) , Ogrenci (a,b,c,d)
		{
			cout << "Isci sinifinin yapici metodu calisti ..." << endl << endl;
		}
};
void Yazdir(Kisi nesne1)
{
	cout << "Ad : " << nesne1.ad << endl;
	cout << "Soyad : " << nesne1.soyad << endl;
	cout << "Yas : " << nesne1.yas << endl;
}
void Yazdir2(Ogrenci nesne2)
{
	cout << "Ad : " << nesne2.ad << endl;
	cout << "Soyad : " << nesne2.soyad << endl;
	cout << "Yas : " << nesne2.yas << endl;
	cout << "Ortalama : " << nesne2.ortalama << endl;
}
void Yazdir3(Isci nesne2)
{
	cout << "Ad : " << nesne2.ad << endl;
	cout << "Soyad : " << nesne2.soyad << endl;
	cout << "Yas : " << nesne2.yas << endl;
	cout << "Ortalama : " << nesne2.ortalama << endl;
	cout << "Maas : " << nesne2.maas << endl;
}
int main()
{
	Kisi n1("irfan","keskin",22);
	Yazdir(n1);
	cout <<endl;
	cout << "\\*************************************************************************/" << endl;
	Ogrenci o1("IRFAN","KESKIN",6,95);
	Yazdir2(o1);
	cout <<endl;
	cout << "\\*************************************************************************/" << endl;
	Isci i1("AAA","BBB",22,96,"5000TL");
	Yazdir3(i1);
	
	return 0;
}
