#include <stdio.h>

void contaIdade(int ano);

int main()
{
    int ano;
    scanf("%d", &ano);
    contaIdade(ano);
    
    return 0;
}

void contaIdade(int ano)
{
    int anobymill;
    anobymill=2025-((2025-ano)*2);
    printf("%d\n", anobymill);
}