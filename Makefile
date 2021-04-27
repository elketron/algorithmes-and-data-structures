Incl = -I header
CC = g++

encryption: caesar.o
	${CC} ${Incl} $? src/cyphers/cyphers.cpp -o build/cyphers

sorting: Arrays.o
	${CC} ${Incl} $? src/sorting_algs.cpp -o build/sorting

caesar.o:
	${CC} ${Incl} -c src/cyphers/caesar.cpp

xor.o:
	${CC} ${Incl} -c src/cyphers/xor.cpp

Arrays.o: src/helper_functions/Arrays.cpp	
	${CC} ${Incl} -c src/helper_functions/Arrays.cpp

clean:
	rm -f *.o build/*
