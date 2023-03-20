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

