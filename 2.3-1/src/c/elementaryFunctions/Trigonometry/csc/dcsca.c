#include "csc.h"

void dcsca(double* in,int size,double* out)
{
  int i = 0;
  for (i = 0;i<size;++i)
  {
    out[i] = dcscs(in[i]);
  }
}