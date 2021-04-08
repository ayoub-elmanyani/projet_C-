#include "Polynome.h"

int main() {
    Polynome e = Polynome() * 2;
    e.disp();
    for (int  i = 0; i < 8; i++) {
        double c = 2 * i + 1;
        double v;
        if(i%2){

            v = -1*2.*(i+1);
              }
        else {
             v =2.*(i+1);
              }
        double tmpp[2] = {c,v};
        Polynome tmp = Polynome(1, tmpp);
        tmp.disp();
        e *= tmp;
    }
    e.disp();

}
