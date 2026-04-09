PC1 - Two Sum II

Integrantes: Brayan Sánchez Zamora y Kevin Seas Solis

Problema: Two Sum II - Input Array Is Sorted (LeetCode 167)

Entrada: Un arreglo de numeros ordenado y un numero target.
Salida: Los indices (empezando en 1) de los dos numeros que suman target.

Tamano de entrada: n = numbers.length

Solucion: Dos punteros (left y right)
- Complejidad temporal: O(n)
- Complejidad espacial: O(1)
- Mejor caso: O(1)
- Peor caso: O(n)

Alternativa ingenua: Fuerza bruta con dos ciclos (O(n^2))

Correctitud: El algoritmo es deterministico y termina porque left aumenta o right disminuye en cada paso.

Invariante: Sí existe solucion, esta entre left y right.

Casos borde: Arreglo de 2 elementos, numeros negativos.

Compilar: g++ -std=c++17 two_sum.cpp -o two_sum.exe
Ejecutar: ./two_sum.exe

Experimentos:
- Builds: -O0, -O2, -Os, -Og funcionaron.
- Sanitizers: No disponibles en MSYS2.
- Profiling: La funcion twoSum concentra el tiempo.
- Cobertura: Teoricamente 100% (no funciono en MSYS2).

Uso de Copilot: Se uso para generar la estructura inicial del codigo. 
 
Video de sustentación

https://www.youtube.com/watch?v=dBtW56yxMMY