#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B,MEDIA;
    float C=3.5,D=7.5;
    scanf("%lf%lf", &A, &B);
    MEDIA = ((A*C)+(B*D))/(C+D);
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}
