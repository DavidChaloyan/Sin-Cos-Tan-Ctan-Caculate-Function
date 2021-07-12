start:sin_cos.o sin.o cos.o tg.o ctg.o
	g++ $^ -o ../bin/$@
%.o:%.cpp
	g++ -c $^ -o $@
clean:
	rm -r *.o 
