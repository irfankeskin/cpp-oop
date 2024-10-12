#include <iostream>
using namespace std;
class Kisi{
	public :
		string ad;
		string soyad;
		int yas;
		Kisi (string isim,string soyisim,int yas ) : ad(isim), soyad(soyisim),yas(yas) 
		{
			cout << "kisi sinifinin yapici metotu calisti ..." << endl;
		}
};
class Ogrenci : public Kisi{
	public:
		int ortalama;
		Ogrenci (string isim,string soyisim,int yas ,int ortalama) : ortalama(ortalama), Kisi (isim,soyisim,yas)
		{
			cout << "Ogrenci sinifinin yapici metodu calisti... " << endl;
		}	
};
class Isci : public Ogrenci{
	public :
		int type;
		Isci (string a,string b,int c,int f,int type) : type(type) , Ogrenci (a,b,c,f)
		{
			cout << "Isci sinifinin yapici metodu calisti ..." << endl;
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
int main()
{
	Kisi n1("irfan","keskin",22);
	Yazdir(n1);
	cout <<endl;
	cout << "\\*************************************************************************/" << endl;
	Ogrenci o1("Taha","Keskin",6,95);
	Yazdir2(o1);
	cout <<endl;
	cout << "\\*************************************************************************/" << endl;
	return 0;
}
