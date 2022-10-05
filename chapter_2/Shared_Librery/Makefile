app: main.c test.h libtest.so
	LD_LIBRARY_PATH=./ 
	export LD_LIBRARY_PATH
	gcc -o app main.c -ltest -L.
	
libtest.so: test.c test2.c 
	#Se crea la libreria caompartida
	gcc -shared -o libtest.so test.c test2.c


clean:
	rm app *.o *.so

