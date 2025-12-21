#include <stdio.h>
#include <cstdlib>

#define MODE 1

#ifndef MODE
#error Please Set Mode!!!
#endif

int main() 
{
#if MODE == 0
    printf("I'm working in test mode.\n");
#elif MODE == 1
    auto add([&](int a, int b) -> int 
        {
            return a + b;
        });

    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    int result = add(num1, num2);
    printf("Result: %d\n", result);
#else
    printf("Unknown mode. Shutting down.\n");
#endif

    return EXIT_SUCCESS;
}