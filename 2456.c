#include <stdio.h>
int main()
{

   int A,B,C,D,E;
   scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
if ((A>=0 && A<=13) && (B>=0 && B<=13) && (C>=0 && C<=13) && (D>=0 && D<=13) && (E>=0 && E<=13))

   if(A<B && B<C && C<D && D<E)
        printf("C\n");

   else if(A>B && B>C && C>D && D>E)
        printf("D\n");
   else
       printf("N\n");

return 0;
}
