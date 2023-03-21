#include "../data_libs/data_io.h"
#include "data_process.h"
#include <stdio.h>
/* #include "../data_libs/data_stat.h" */
int main() {
  int n;
  int trash;
  if (scanf("%d.%d", &n, &trash) == 1 && n > 0) {
    double *data = (double *)malloc(sizeof(double) * n);

    input(data, n);

    (normalization(data, n)) ? output(data, &n) : printf("ERROR");
    free(data);
  }
  return (0);
}
