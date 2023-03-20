#include <stdio.h>
#include "../data_libs/data_io.h"
#include "data_process.h"
/* #include "../data_libs/data_stat.h" */
int main()
{
    int n;
    int trash;
    if(scanf("%d.%d", &n, &trash) == 1) {
        double *data = (double *) malloc(sizeof(double) * n);
    
    //Don`t forget to allocate memory !
        input(data, n);

        if (normalization(data, n))
            output(data, &n);
        else
            printf("ERROR");  
        free(data);
    }
    return (0);
}
