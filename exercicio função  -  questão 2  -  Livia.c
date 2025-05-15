#include <stdio.h>

int arredonda(float x)
{

    if (x > 0)
    {

        return (int)(x + 0.5);
    }
    else
    {

        return (int)(x - 0.5);
    }
}
