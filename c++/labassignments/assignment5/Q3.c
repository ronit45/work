#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int avg = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        avg += arr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The even numbers are :-> \n");
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The prime numbers are :-> \n");
    for (int i = 0; i < n; ++i)
    {
        int flag = 1;
        for (int j = 2; j < arr[i]; ++j)
        {
            if (arr[i] % j == 0)
                flag = 0;
        }
        if (flag)
            printf("%d ", arr[i]);
    }
    printf("\n");

    avg /= n;
    printf("The average value of the array is :-> %d\n", avg);
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > avg)
            x++;
    }
    printf("The values which  are more than the mean value from the above array :-> %d\n", x);
    int present = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 50)
            present = 1;
    }
    if (present)
    {
        printf("The number 50 is present\n");
    }
    else{
        printf("The number 50 is not present\n");
    }
}