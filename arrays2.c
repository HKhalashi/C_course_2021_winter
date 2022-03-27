#include <stdio.h>
#include <time.h>

#define N 5000
float m[N][N];

int main()
{
  float a_1 = 0.0;

  clock_t s_1, f_1;
  s_1 = clock();

  for(int n = 0; n < 100; ++n)
    for(int i = 0; i < N; ++i)
      for(int j = 0; j < N; ++j)
        a_1 += m[i][j];

  f_1 = clock();

  printf("%f: a_1 takes %f ms\n", a_1, ((double)(f_1 - s_1)) * 1000.0 / CLOCKS_PER_SEC);
  float a_2 = 0.0;

  clock_t s_2, f_2;
  s_2 = clock();

  for(int n = 0; n < 100; ++n)
    for(int i = 0; i < N; ++i)
      for(int j = 0; j < N; ++j)
        a_2 += m[j][i];

  f_2 = clock();

  printf("%f: a_2 takes %f ms\n", a_2, ((double)(f_2 - s_2)) * 1000.0 / CLOCKS_PER_SEC);



  return 0;
}
