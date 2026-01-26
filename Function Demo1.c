#include <stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

void main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;
    functionM();
    
    a = functionM();
   
    b = functionN(a, b);
   
    r = functionO(r, a, s, b);
    
   
   s = functionP(a, b, c, d); 
    //s = functionP(a, b, c, d, e); 
	//Accepts only 4 values.

    u = functionM();
   
    c = d + functionN(r, s);//
    
    t = s * functionO(r, a, r, a);
    
    a = v + functionP(r, s, t, t);
    
    functionP(functionN(a, a), s, t, t+r);
    
    v = functionP(functionN(a, a), s, t, t+r);
    
}

