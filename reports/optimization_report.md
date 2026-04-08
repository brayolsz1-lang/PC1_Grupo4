Reporte de Optimizacion

Builds probados:

- O0 (depuracion): g++ -std=c++17 -O0 -g -Wall -Wextra -pedantic two_sum.cpp -o two_sum_O0.exe
  Resultado: Tests pasaron

- Og (depurable optimizado): g++ -std=c++17 -Og -g two_sum.cpp -o two_sum_Og.exe
  Resultado: Tests pasaron

- O2 (release): g++ -std=c++17 -O2 -DNDEBUG two_sum.cpp -o two_sum_O2.exe
  Resultado: Tests pasaron

- Os (compacto): g++ -std=c++17 -Os two_sum.cpp -o two_sum_Os.exe
  Resultado: Tests pasaron

Observaciones:
Todos los builds produjeron el mismo resultado correcto.
La diferencia principal esta en la velocidad y el tamaño del ejecutable.