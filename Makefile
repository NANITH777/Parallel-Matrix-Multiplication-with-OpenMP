CC = gcc   #Derleyici olarak gcc'yi kullan
CFLAGS = -fopenmp -Wall -O3 #  OpenMP desteğini etkinleştir, tüm uyarıları göster ve kodu maksimum performans için optimize et.
LDFLAGS = -lpthread    # Çoklu iş parçacığı desteği sağlamak için pthread kütüphanesi ile bağlantı kur.

all: matrix_multiplication

matrix_multiplication: matrix_multiplication.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o matrix_multiplication matrix_multiplication.c

run: matrix_multiplication
	./matrix_multiplication matrix_a.txt matrix_b.txt sonuclar.txt

clean:
	rm sonuclar.txt



