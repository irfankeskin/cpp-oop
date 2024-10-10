#include <iostream>
using namespace std;
class Kisi{
	private :
	string isim;
	string soyad;
	int yas;
	public :
	Kisi(string ad , string soyad , int yas )//constructor 
	{
		cout << "constructor metot calisti." << endl << endl;
		this->isim = ad;
		this->soyad = soyad;
		this->yas = yas;
	}
	~Kisi ()
	{
		cout << "yikici metot calisti nesne yok edildi..." << endl << endl;
	}
	void setAd (string ad)
	{
		this->isim = ad;
	}
	string getAd ()
	{
		return isim;
	}
	void setSoyad (string soyad)
	{
		this->soyad = soyad;
	}
	string getSoyad()
	{
		return soyad;
	}	
	void setYas (int yas)
	{
		this->yas = yas;
	}
	int getYas ()
	{
		return yas;
	}
};
int main()
{
	Kisi * nesne1 = new Kisi ("irfan","keskin",22);
	delete nesne1;
}
