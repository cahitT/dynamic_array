hepsi:	derle calistir

derle:
	g++ -I ./include/ -o ./lib/Top.o -c ./src/Top.cpp
	g++ -I ./include/ -o ./lib/DiziIslemleri.o -c ./src/DiziIslemleri.cpp
	g++ -I ./include/ -o ./bin/Program ./lib/Top.o ./lib/DiziIslemleri.o ./src/main.cpp
	
calistir:
	./bin/Program