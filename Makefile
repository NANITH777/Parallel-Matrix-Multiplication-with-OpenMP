CC = gcc   
CFLAGS = -fopenmp -Wall -O3
LDFLAGS = -lpthread   

all: matrix_multiplication

matrix_multiplication: matrix_multiplication.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o matrix_multiplication matrix_multiplication.c

run: matrix_multiplication
	./matrix_multiplication matrix_a.txt matrix_b.txt sonuclar.txt

clean:
	rm sonuclar.txt



