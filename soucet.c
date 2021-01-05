#include <stdio.h>

int main() {

    int sum = 0;
     printf("Součet všech čísel od 1 do 20 je:\n")
    ;for (int i = 1; i <= 20; i++)
{
        sum = i + sum; 
}
   printf("%i\n", sum);

  return 0; 
}
