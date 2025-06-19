#include <stdio.h>
#include <stdbool.h>
int main() 
{
    int nums[] = {1, 2, 3, 2, 1}, n = 5, isPalin = 1;
    for (int i = 0; i < n / 2; i++)
        if (nums[i] != nums[n - 1 - i]) 
        {
            isPalin = 0;
            break;
        }
    printf(isPalin ? "true" : "false");
    return 0;
}
