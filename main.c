#include "ft_printf.h"
#include <stdio.h>

#include <stdio.h>
#include <limits.h> // For INT_MIN
#include "ft_printf.h"

int main()
{
    int ret_ft, ret_real;
    char *null_str = NULL;
    void *null_ptr = NULL;

    printf("=== TEST START ===\n");

    // 1. Strings
    printf("\n--- Test 1: NULL String ---\n");
    ret_real = printf("Real: %s\n", null_str);
    ret_ft   = ft_printf("Mine: %s\n", null_str);
    printf("Return: Real=%d, Mine=%d\n", ret_real, ret_ft);

    // 2. Integers
    printf("\n--- Test 2: INT_MIN ---\n");
    ret_real = printf("Real: %d\n", INT_MIN);
    ret_ft   = ft_printf("Mine: %d\n", INT_MIN);
    printf("Return: Real=%d, Mine=%d\n", ret_real, ret_ft);

    // 3. Pointers
    printf("\n--- Test 3: NULL Pointer ---\n");
    ret_real = printf("Real: %p\n", null_ptr);
    ret_ft   = ft_printf("Mine: %p\n", null_ptr);
    printf("Return: Real=%d, Mine=%d\n", ret_real, ret_ft);

    // 4. Hex
    printf("\n--- Test 4: Hex -1 ---\n");
    ret_real = printf("Real: %x\n", -1);
    ret_ft   = ft_printf("Mine: %x\n", -1);
    printf("Return: Real=%d, Mine=%d\n", ret_real, ret_ft);

    // 5. Percent
    printf("\n--- Test 5: %%%% ---\n");
    ret_real = printf("Real: %%%%\n");
    ret_ft   = ft_printf("Mine: %%%%\n");
    printf("Return: Real=%d, Mine=%d\n", ret_real, ret_ft);
    
    return (0);
}