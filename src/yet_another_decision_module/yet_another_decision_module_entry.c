#include "decision.h"
int main()
{
    double *data;
    int n;
    
    if (make_decision(data, n))
        printf("YES"); 
    else
        printf("NO");  
    return (0);
}
