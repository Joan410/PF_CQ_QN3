#include <iostream>
#include <string>

int sum_from_to(int first, int last)
{
    int sum = 0;
    for (int i = first; i <= last; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int first = 1;
    int last = 10;

    int result = sum_from_to(first, last);
    printf("The sum from %d to %d", first, last, result);
    return 0;
}
