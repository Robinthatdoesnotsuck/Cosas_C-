#include <stdio.h>

#define infimo 0
#define supremo 400
#define saltos_de_suma 30

int main()
{
    int temperatura_estupida, celsius;
    temperatura_estupida = infimo;
    while (temperatura_estupida <= supremo)
    {
        celsius = 5 * (temperatura_estupida-32) / 9;
        printf("%d\t%d\n", temperatura_estupida, celsius);
        temperatura_estupida += saltos_de_suma;
    }
    return 0;
}