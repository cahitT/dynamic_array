#ifndef DIZIISLEMLERI_HPP
#define DIZIISLEMLERI_HPP
#include "Top.hpp"

class DiziIslemleri
{
public:
	DiziIslemleri();
	void diziOlustur(Top **,int);
	void diziTersCevir(Top **,int);
	void diziYazdir(Top**, int);
	~DiziIslemleri();
};
#endif