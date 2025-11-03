#include "Mylib.h"
#include <iostream>
using namespace std;
int main(){
    Complex x(2,3),y(5,-10),sum;
    sum = ComplexAdd(x,y);
    sum.show();
    return 0;
}
