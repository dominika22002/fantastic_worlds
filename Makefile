#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

TRGDIR=/tmp/fantastyczneswiaty

__start__: ./fantastyczneswiaty
	./fantastyczneswiaty

./fantastyczneswiaty: obj obj/main.o
	g++ -Wall -pedantic -std=c++11 -o ./fantastyczneswiaty obj/main.o


obj:
	mkdir -p obj

obj/main.o: src/main.cpp inc/bohaterowie.hh inc/talia.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

clear:
	rm -f obj/*.o ./fantastyczneswiaty
