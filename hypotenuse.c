// this complies files, for c= files, after getting the hypotenuse and side lengths
//Modified by Jack Binder, 2022-05-02 
#include <math.h>


double hypotenuse(int a, int b)
{
    double c;

    c = sqrt(pow((double)a, 2) + pow((double)b, 2));
    return c;
}

