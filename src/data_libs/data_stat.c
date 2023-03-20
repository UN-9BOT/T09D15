#include "data_stat.h"
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

