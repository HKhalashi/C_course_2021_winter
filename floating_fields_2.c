#include <stdio.h>

typedef union
{
  struct {
    unsigned long long fractional: 52; //this syntax specifies the number of bits
    unsigned exponent  : 11;
    int      sign      : 1;
  } dd;
  double d;
} du;

void print_bits(unsigned long long v, int width)
{
  char r[width+1];
  for(int i = 0; i < width; r[i++] = '0');
  r[width] = '\0';

  while(width--)
  {
    if(v & 1)
      r[width] = '1';
    v >>= 1;
  }

  printf("%s",r);
}

void println_double_fields(double d)
{
  du u;
  u.d = d;
  printf("S: %d\t E: %04u (%04d) ", u.dd.sign, u.dd.exponent, u.dd.exponent -1023);
  print_bits(u.dd.fractional, 52);
  printf(" <----- %lf\n", u.d);
}

int main()
{
  println_double_fields(1.0l);
  println_double_fields(1.5l);
  println_double_fields(-2.0l);
  println_double_fields(-2.5l);
  return 0;
}
