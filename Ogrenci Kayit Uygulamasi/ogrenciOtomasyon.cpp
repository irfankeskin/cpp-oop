#include <iostream>
using namespace std;
class Ogrenci{
	private:
		string tc;
		string ad;
		string soyad;
		int yas;
		string dersAdi;
		int ortalama;
		public:
		void setTc(string kimlik)
		{
			this->tc = kimlik;
		}
		void setAd(string isim)
		{
			this->ad = isim;
		}
		void setSoyad(string soyisim)
		{
			this->soyad = soyisim;
		}
		void setYas(int yas)
		{
			this->yas = yas;
		}
		void setDersAdi(string dersAdi)
		{
			this->dersAdi = dersAdi;
		}
		void setOrtalama(int ortalama)
		{
			this->ortalama = ortalama;
		}
		
		string getTc()
		{
			return tc;
		}
		string getAd()
		{
			return ad;
		}
		string getSoyad()
		{
			return soyad;
		}
		int getYas()
		{
			return yas;
		}
		string getDersAdi()
		{
			return dersAdi;
		}
		int getOrtalama()
		{
			return ortalama;
		}
		void listele(Ogrenci [] ,int);
};

void siralama(Ogrenci ogr[],int n)
{
	Ogrenci temp;
	for(int i = 0;i < n ;i++)
	{
		for(int j = 0;j < n-1;j++)
		{
			if(ogr[j].getAd().compare(ogr[j+1].getAd()) >0 )
			{
				temp = ogr[j];
				ogr[j] = ogr[j+1];
				ogr[j+1] = temp;
			}
		}
	}
	cout << endl << endl;
	cout << "\t\tLISTE ISME GORE SIRALANDI !!" << endl;
	cout << endl << endl;
	
	
	for(int i = 0;i < n;i++)
	{
		cout << i+1 << ". OGRENCI BILGILERI : " << endl;
		cout << endl << endl;
		cout <<"TC       : "<< ogr[i].getTc() << endl;
		cout <<"Isim     : "<< ogr[i].getAd() << endl;
		cout <<"Soyad    : "<< ogr[i].getSoyad() << endl;
		cout <<"Yas      : "<< ogr[i].getYas() << endl;
		cout <<"Ders Adi : "<< ogr[i].getDersAdi() << endl;
		cout <<"Ortalama : "<< ogr[i].getOrtalama() << endl;
		cout << endl << endl;
	}
	
}

void Ogrenci::listele (Ogrenci ogr[] ,int n)
{
		cout << endl;
		cout << "\t\tOGRENCI BILGILERI LISTELENDI" << endl;
		for(int i = 0;i < n;i++)
	{
		cout << i+1 << ". OGRENCI BILGILERI : " << endl;
		cout << endl << endl;
		cout <<"TC       : "<< ogr[i].getTc() << endl;
		cout <<"Isim     : "<< ogr[i].getAd() << endl;
		cout <<"Soyad    : "<< ogr[i].getSoyad() << endl;
		cout <<"Yas      : "<< ogr[i].getYas() << endl;
		cout <<"Ders Adi : "<< ogr[i].getDersAdi() << endl;
		cout <<"Ortalama : "<< ogr[i].getOrtalama() << endl;
		cout << endl << endl;
	}
}

void yuksekPuan(Ogrenci ogr[],int n)
{
	int ortalama = 0;
	Ogrenci temp;

	for(int i = 0; i < n;i++)
	{
		if(ortalama < ogr[i].getOrtalama())
		{
			temp = ogr[i];
			ortalama = ogr[i].getOrtalama();
		}
	}
	cout << endl;
	cout << "ORTALAMASI EN YUKSEK OGRENCI BILGILERI " << endl;
	cout << endl;
	cout <<"Isim     : "<< temp.getAd() << endl;
	cout <<"Soyad    : "<< temp.getSoyad() << endl;
	cout <<"Ortalama : "<< temp.getOrtalama() << endl;
	cout << endl << endl;
}

void ara(Ogrenci ogr[],int n)
{
	bool sonuc = false;
	string isim;
	cout << "ARADIGINIZ OGRENCININ ISMI : ";
	cin >> isim; 
	Ogrenci temp;

	for(int i = 0; i < n;i++)
	{
		if(ogr[i].getAd().compare(isim) == 0)
		{
			temp = ogr[i];
			sonuc = true;
			break;
		}
	}
	if(sonuc)
	{
	cout << endl;
	cout << "ISMIYLE ARADIGINIZ OGRENCI" << endl;
	cout << endl;
	cout <<"TC       : "<< temp.getTc() << endl;
	cout <<"Isim     : "<< temp.getAd() << endl;
	cout <<"Soyad    : "<< temp.getSoyad() << endl;
	cout <<"Yas      : "<< temp.getYas() << endl;
	cout <<"Ders Adi : "<< temp.getDersAdi() << endl;
	cout <<"Ortalama : "<< temp.getOrtalama() << endl;
	cout << endl << endl;
	}
	else
	{
		cout << endl << endl;
		cout << "OGRENCI BULUNAMADI !!!" << endl;
	}
}
int main()
{
	cout << "KAC OGRENCI KAYIDI YAPACAKSINIZ : ";
	int n;
	cin >> n;
	Ogrenci ogr[n];
	
	string tc;
	string ad;
	string soyad;
	int yas;
	string dersAdi;
	int ortalama;
	
	for(int i = 0;i < n;i++)
	{
		cout <<"\t\t"<< i+1 << ". OGRENCI BILGILERINI GIRINIZ : " << endl;
		cout <<"TC       : ";
		cin >> tc;
		cout <<"Isim     : ";
		cin >> ad;
		cout <<"Soyad    : ";
		cin >> soyad;
		cout <<"Yas      : ";
		cin >> yas;
		cout <<"Ders Adi : ";
		cin >> dersAdi;
		cout <<"Ortalama : ";
		cin >> ortalama;
		ogr[i].setTc(tc);
		ogr[i].setAd(ad);
		ogr[i].setSoyad(soyad);
		ogr[i].setYas(yas);
		ogr[i].setDersAdi(dersAdi);
		ogr[i].setOrtalama(ortalama);
	}
	cout << endl;
	system("cls");
	cout << endl ;
	cout << "\tKAYIT ISLEMI TAMAMLADI !!!" << endl;
	cout << endl << endl << endl;
	int s;
	while(true)
	{
		cout << "\tHANGI ISLEMI YAPMAK ISTIYOSUNUZ ?" << endl << endl;
		cout << "ISME GORE SIRALAMA = 1" << endl << endl;
		cout << "EN YUKSEK PUANLI OGRENCI = 2" << endl << endl;
		cout << "OGRENCI ARAMA = 3" << endl << endl;
		cout << "TUM OGRENCI BILGILERINI LISTELE = 4" << endl << endl;
		cout << "PROGRAMI SONLADIR = 0" << endl << endl;
		cout << "GIRIS = ";
		cin >> s;
		if(s == 1)
		{
			siralama(ogr,n);
		}
		else if(s == 2)
		{
			yuksekPuan(ogr,n);
		}
		else if(s == 3)
		{
			ara(ogr,n);
		}
		else if(s == 4)
		{
			ogr[0].listele(ogr,n);
		}
		else if(s == 0)
		{
			return 0;
		}
	}
}
