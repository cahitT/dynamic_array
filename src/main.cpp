#include "Top.hpp"
#include "DiziIslemleri.hpp"
using namespace std;

void renkSifirla();

int main()
{
	srand(time(NULL));
	int boyut;
	cout << "Dizi boyutu: ";
	cin >> boyut;

	Top **toplar = new Top*[boyut];
	DiziIslemleri *dizi = new DiziIslemleri();
	
	dizi->diziOlustur(toplar, boyut);
	renkSifirla();

	cout << "Dizi basariyla olusturuldu." << endl;
	int secim = 0;

	while (secim<3)
	{
		renkSifirla();
		cout << "1. Diziyi Ters Cevir" << endl << "2. Diziyi Yazdir" << endl << "3. Cikis" << endl << "Seciminiz: ";
		cin >> secim;

		if (secim == 1)
		{
			dizi->diziTersCevir(toplar, boyut);
		}
		else if (secim == 2)
		{
			dizi->diziYazdir(toplar, boyut);
		}
		else if (secim == 3)
		{
			for (int i = 0; i < boyut ; i++)
			{
				delete toplar[i];
			}
			delete dizi;
			break;
		}
		else
		{
			cout << " Yanlis bir deger girdiniz.Lutfen tekrar deneyiniz." << endl;
		}

		secim = 0;
	}
	return 0;
}
void renkSifirla()
{
	int renkSifirla = 7;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), renkSifirla);
}