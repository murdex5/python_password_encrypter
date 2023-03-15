#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool is_50 = true;
    int count;
    count = 0;
    while(is_50)
    {
        printf("%d\n", count);
        if (count < 50)
        {
            count++;
        }
        else
        {
            is_50 = false;
        }
    }
}
