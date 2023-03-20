#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#include "../data_module/data_process.h"
#include "../yet_another_decision_module/decision.h"
int main()
{
    int n, trash;
    
    if(scanf("%d.%d", &n, &trash) == 1 && n > 0) {
        double *data = (double *) malloc(sizeof(double) * n);
    

        printf("LOAD DATA...\n");
        input(data, n);

        printf("RAW DATA:\n\t");
        output(data, &n);

        printf("\nNORMALIZED DATA:\n\t");
        normalization(data, n);
        output(data, &n);
        
        printf("\nSORTED NORMALIZED DATA:\n\t");
        sort(data, n);
        output(data, &n);
        
        printf("\nFINAL DECISION:\n\t");
        if (make_decision(data, n))
            printf("YES"); 
        else
            printf("NO");  
        free(data);
    }
    return (0);
}
