#include "DiziIslemleri.hpp"

DiziIslemleri::DiziIslemleri()
{}

void DiziIslemleri::diziOlustur(Top **toplar, int boyut)
{
	for (int i = 0; i<boyut; i++)
	{
		toplar[i] = new Top();
	}
}
void DiziIslemleri::diziTersCevir(Top **toplar,int boyut)
{
	for (int i = 0; i<boyut / 2; i++)
	{
		Top *temp = toplar[i];
		toplar[i] = toplar[boyut - i - 1];
		toplar[boyut - i - 1] = temp;
	}
}
void DiziIslemleri::diziYazdir(Top **toplar, int boyut)
{
	for (int i = 0; i<boyut; i++)
	{
		cout << "[" << i << "]->" << toplar[i]->yazdir() << " " << toplar[i] << endl;
	}
	cout << "---------------------" << endl;
}

DiziIslemleri::~DiziIslemleri()
{
}