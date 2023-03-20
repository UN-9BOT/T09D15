#include "data_stat.h"
void sort(double *data, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (data[j] > data[j+1]) {
                double tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
}


double max(double *data, int n) {
    double res = *data; 
    for (int i = 0; i < n; i++) {
        if (data[i] > res) { res = data[i]; }
    }
    return (res);
}

double min(double *data, int n) {
    double res = *data; 
    for (int i = 0; i < n; i++) {
        if (data[i] < res) { res = data[i]; }
    }
    return (res);
}
double mean(double *a, int n) {
    double res = 0;

    for (int i = 0; i < n; i++) {
        res += *(a + i);
    }
    return (res / n);
}

double variance(double *a, int n) {
    double res = 0;
    double meanS = mean(a, n);

    for (int i = 0; i < n; i++) {
        res += (*(a + i) - meanS) * (*(a + i) - meanS);
    }
    return (res / n);
}

