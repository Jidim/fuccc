#include <math.h>
#include "square.h"

solution square(double a, double b, double c)
{
    solution res;

    if(a == 0){
        if(b == 0){
            if(c == 0)
                res.count = 3;
            else
                res.count = 0;
            return res;
        }
    else{
        res.x1 = (-c)/b;
        res.count = 1;
        return res;
        }
    }

    double D = pow(b, 2) - 4*a*c;

    if(D < 0.0) {
        res.count = 0;

    }
    if(D == 0.0) {
        res.x1 = -b/(2*a);
        res.count = 1;
    }
    if(D > 0.0) {
        res.x1 = (-b - sqrt(D)) / (2*a);
        res.x2 = (-b + sqrt(D)) / (2*a);
        res.count = 2;
    }

    return res;
}
