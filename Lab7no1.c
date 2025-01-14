double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
void main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
}
//a)  functionM(); correct
//b)  a = functionM(); incorrect
//c)  b = functionN(a, b); correct
//d)  r = functionO(r,a,s,b); incorrect
//e)  s = functionP(a,b,c,d,e); incorrect
//f)  u = functionM(); correct
//g)  c = d + functionN(r,s); incorrect
//h)  t = s * functionO(r, a, r, a); correct
//i)  a = v + functionP(r, s, t, t); incorrect
//j)  functionP(functionN(a, a), s, t, t+r); incorrect
//k)  v = functionP(functionN(a, a), s, t, t+r); incorrect
 
