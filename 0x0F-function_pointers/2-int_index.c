#include "main.h"

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

index = size;
if (size <= 0)
return (-1);
if (!array ||!cmp)
return (-1);

while (size--)
{
if (cmp(array[index- size]))
return (index - size);
}

return (-1);
}
