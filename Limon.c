#include<stdio.h>
int main()
{
int N, experience;
scanf("%d", &N);

    for(int i=0;i< N;i++)
    {
        scanf("%d", &experience);

        if(experience<1)
        {
        printf("Entry-level candidate\n");
        }
        else if(experience>=1 && experience<=3)
        {
            printf("Junior candidate\n");
        }
        else if("experience>=4 && experience<=7")
        {
           printf("Mid-level candidate\n");
        }
        else if("experience>7")
        {
            printf("Senior candidate\n");
        }
    }
return 0;
}
