a.out: bankSimulation.cpp Customer.o
	g++ bankSimulation.cpp Customer.o
Customer.o: Customer.cpp Customer.h
	g++ -c Customer.cpp
clean:  
	rm *.o a.out
