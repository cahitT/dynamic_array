#include "Top.hpp"


Top::Top()
{
	renk = renkAta((rand() % 15) + 1);  //renk degiskenine rand() fonksiyonu ile random bir sayı atar ve renkAta fonksiyonuna gönderir.
	GSURAT = 248;
}

int Top::renkAta(int rnk)
{
	int renkata = rnk;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), renkata); //Gönderilen rastgele sayıyı renge cevirir.
	return rnk;
}
char Top::yazdir()
{
	renkAta(renk);    //Renkle birlikte karakteri ekrana yazdirir.
	return GSURAT;
}


Top::~Top()
{}