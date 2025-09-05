#include <stdio.h>

int main()
{
    int prev = 0;
    int curr = 1;
    int result = 0;

    for (int i = 0; i < 20; i++)
    {
        result = curr + prev;
        prev = curr;
        curr = result;
        printf("%d\n", result); 
    }

    return 0;
}

// Author: 0x3n19m4