a: CCompexVector.o compex.o main.o
	wg++ -fno-elide-constructors -std=c++11 CCompexVector.o compex.o main.o

main.o: main.cpp compex.h CCompexVector.h
	wg++ -fno-elide-constructors -std=c++11  main.cpp -c

compex.o: compex.cpp compex.h
	wg++ -fno-elide-constructors -std=c++11  compex.cpp -c

CCompexVector.o: CCompexVector.cpp CCompexVector.h
	wg++ -fno-elide-constructors -std=c++11  CCompexVector.cpp -c