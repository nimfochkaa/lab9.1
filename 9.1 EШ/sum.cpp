#include "dod.h"
#include "sum.h"
#include "var.h"
#include <cmath>

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 1;
    a = x;    
    s = a;    

    do {
        n++;
        dod();  
        s += a;  
    } while (fabs(a) > e);  
}