#include "../data_libs/data_io.h"
#include "decision.h"
int main() {
  int n;
  int trash;
  if (scanf("%d.%d", &n, &trash) == 1 && n > 0) {
    double *data = (double *)malloc(sizeof(double) * n);

    input(data, n);
    if (make_decision(data, n))
      printf("YES");
    else
      printf("NO");
    free(data);
  }
  return (0);
}
