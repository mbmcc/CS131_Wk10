poly-shapes: main.o
	g++ main.o Shape.o -o poly-shapes

Shape.o: Shape.cpp
	g++ -c Shape.cpp
	
main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o poly-shapes