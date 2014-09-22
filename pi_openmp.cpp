#include <stdio.h>
#include <queue>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <time.h>
static long num_steps = 100000000;
int main(int argc, char **argv) {
  using namespace std;
  int i; 
  double x;
  double pi,sum=0.0;
  double step = 1.0/(double) num_steps;
  time_t t0= time(NULL);
#pragma omp parallel num_threads(3)
  {
#pragma omp for
    for(int i=0;i<num_steps;i++)
      {
	x=(i+0.5)*step;
	sum+=4.0/(1.0+x*x);
      }
  }

  time_t t1=time(NULL);
  pi=sum;


  printf("PI is %f in time %lld \n",pi,(long long )(t1-t0));
}
