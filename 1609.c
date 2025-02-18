#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int n;
        scanf("%d", &n);

        int arr[n], visited[n], R = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            visited[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 1)
                continue;

            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;

                    if (j > i)
                        visited[j] = 1;
                }
            }
            if (count > 1)
                R += count - 1;
        }
        printf("%d\n", n-R);
    }
return 0;
}

