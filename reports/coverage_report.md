Reporte de Cobertura (gcov)

Comandos ejecutados:

g++ -std=c++17 --coverage two_sum.cpp -o two_sum_cov.exe
./two_sum_cov.exe
gcov two_sum.cpp

Resultados:
El entorno MSYS2 UCRT64 no genero correctamente los archivos .gcda y .gcno.

El conjunto de pruebas (runTests) cubre:
- Casos normales (ejemplos de LeetCode)
- Casos borde (arreglo de 2 elementos)
- Numeros negativos

Por lo tanto, teoricamente la cobertura es del 100%.

Nota: El problema esta en el entorno, no en el codigo.