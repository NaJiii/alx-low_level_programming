#include <stdio.h>
#include "main.h"

int main(void)
{
    int r;

r = print_sign(98);
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(r + '0');
_putchar('\n');
r = print_sign(402);
_putchar(r + '0');
_putchar('\n');
r = print_sign(-459);
_putchar(r + '0');
_putchar('\n');
return (0);
}
