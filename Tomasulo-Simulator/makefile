tomasulo: instruction.o tomasulo.o
	g++ instruction.o tomasulo.o -o tomasulo

instruction.o: instruction.cpp
	g++ -c instruction.cpp

tomasulo.o: tomasulo.cpp
	g++ -c tomasulo.cpp

clean:
	rm *.o tomasulo
