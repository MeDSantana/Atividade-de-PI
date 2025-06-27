#include <stdio.h>

void contaNeto(int num, int neto[]);

int main()
{
    int num, neto[num];
    scanf("%d", &num);
    
    contaNeto(num, neto);
    
    return 0;
}


void contaNeto(int num, int neto[])
{
    int total=0;
    
    for (int i=0; i<num; i++)
    {
        scanf("%d", &neto[i]);
        total+=neto[i];
    }
    printf("%d\n", total);
}