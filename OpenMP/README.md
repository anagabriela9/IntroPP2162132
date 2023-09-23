Taller 1

Se encuentran los códigos para la Sucesión Fibonacci en lenguaje C: código secuencial y código en paralela en omp.
Para la ejecución se utilizó:

gcc -o fibonacci suma_fibonacci.c -lm -fopenmp
gcc -o omp_fibonacci omp_suma_fibonacci.c -lm -fopenmp

./fibonacci
./omp_fibonacci

Se define número de hilos 5 pero solo se hace uso de 2

Tiempos de ejecución con el número ingresado = 500:

SECUENCIAL:

real  0m7.197s
user  0m0.000s
sys   0m0.002s

PARALELA EN OMP:

real  0m3.189s
user  0m0.000s
sys   0m0.004s

Trabajo realizado en GUANE
