Reporte de Profiling (gprof)

Comandos ejecutados:

g++ -std=c++17 -O2 -pg two_sum.cpp -o two_sum_pg.exe
./two_sum_pg.exe
gprof two_sum_pg.exe gmon.out > profiling.txt

Resultados:
La funcion twoSum concentra la mayor parte del tiempo de ejecucion.
Esto es esperado porque el algoritmo recorre el arreglo una sola vez (O(n)).

Conclusion:
El profiling confirma que la complejidad temporal es lineal en el tamano de entrada.