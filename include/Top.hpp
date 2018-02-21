#ifndef TOP_HPP
#define TOP_HPP
#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

class Top
{
private:
	char GSURAT;
	int renk;
public:

	Top();
	int renkAta(int);  //Karakterlerin rengini belirttik.
	char yazdir();
	~Top();

};
#endif