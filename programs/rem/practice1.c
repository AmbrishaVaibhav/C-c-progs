#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ivar;

    float *fVar;
    char *cVar;
    ivar = (int*)malloc(1 * sizeof(int));
    fVar = (float*)malloc(1 * sizeof(float));
    cVar = (char*)malloc(1 * sizeof(char));

    printf("enter the integer value for int : ");
    scanf("%d", ivar);
    printf("enter the float value : ");
    scanf("%f", fVar);
    printf("enter the char value : ");
    scanf(" %c", cVar);

    printf("the values of the variables are %d,%0.2f,%c",*ivar,*fVar,*cVar);

    free(ivar);
    free(fVar);
    free(cVar);
    return 0;
}
