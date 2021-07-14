#include <stdlib.h>
#include <stdio.h>

int main(int n){

    scanf("%d",&n);
    int *p = malloc(n*sizeof(int));
    int **b = malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        scanf("%d",&p[i]);
        b[i] = malloc(n*sizeof(int));
    }  
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d",&b[p[i]-1][j]);
        }
    }
    printf("\n"); 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ",b[i][j]);
        }  
        printf("\n");  
    } 
    free (p);
    p = NULL;
    for (int i = 0; i < n; i++){
        free(b[i]);
    }
    free(b);
    b = NULL;
    return 0;
}



