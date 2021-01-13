#include <stdio.h>

void SetMt(int* a, int b[])
{
  a[0] = 2;
  b[1] = 4;
}

int main()
{

    // creamos una matriz:
    int z[2]; // sz 2


    SetMt(z, z);
    printf("%d %d ", z[0], z[1]); // Salida: 24

return 0;
}
