Incl = -I header
CC = g++

encryption:
	${CC} ${Incl} src/encryption_algs.cpp src/main.cpp -o build/main

sorting: Arrays.o
	${CC} ${Incl} $? src/sorting_algs.cpp -o build/sorting

Arrays.o: src/helper_functions/Arrays.cpp	
	${CC} ${Incl} -c src/helper_functions/Arrays.cpp

clean:
	rm -f *.o build/*
