/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:56:00 by ipersids          #+#    #+#             */
/*   Updated: 2024/09/04 15:24:00 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

#include <stdio.h>
#include <string.h>
#include <math.h>

void test_ft_atoi(char *str, int expected)
{
    int result = ft_atoi(str);
    if (result == expected)
        printf("PASS: ft_atoi(\"%s\") = %d\n", str, result);
    else
        printf("FAIL: ft_atoi(\"%s\") = %d (expected: %d)\n", str, result, expected);
}

void test_ft_is_prime(int nb, int expected)
{
    int result = ft_is_prime(nb);
    if (result == expected)
        printf("PASS: ft_is_prime(%d) = %d\n", nb, result);
    else
        printf("FAIL: ft_is_prime(%d) = %d (expected: %d)\n", nb, result, expected);
}

void	test_ft_putnbr(int nb)
{
    printf("Testing ft_putnbr with input: %d\nOutput: \n", nb);
    ft_putnbr(nb);
    printf("\n");
}

void test_ft_putstr(char *str)
{
    printf("Expected: \"%s\"\n", str);
    printf("Output:   \n");
    ft_putstr(str);
    printf("\n");
}

// A simple helper function to print the range array
void print_range(int *range, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", range[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]");
}

void test_ft_recursive_power(int nb, int power)
{
    int result = ft_recursive_power(nb, power);

    printf("nb = %d, power = %d => Result: %d\n", nb, power, result);
    if (result == (int)pow(nb, power))
        printf("PASS\n");
    else
        printf("FAIL\n");
}

void test_ft_range(int min, int max)
{
    int *range;
    int size = max - min;

    printf("Range for min = %d, max = %d\n", min, max);
    range = ft_range(min, max);
    
    if (range == NULL)
    {
        printf("Output: NULL\n");
    }
    else
    {
        printf("Output: ");
        print_range(range, size);
        printf("\n");
        // Free allocated inside ft_range() memory to avoid memory leaks
        free(range);
    }
    printf("\n");
}

// A simple helper function to print an array
void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void test_ft_sort_int_tab(int *tab, int size)
{
    printf("Before sorting: ");
    print_array(tab, size);
    
    ft_sort_int_tab(tab, size);

    printf("After sorting:  ");
    print_array(tab, size);
    printf("\n");
}

void test_ft_sqrt(int nb, int expected)
{
    int result = ft_sqrt(nb);
    printf("Input: %d, Result: %d, Expected: %d\n", nb, result, expected);
    if (result == expected)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
}

void test_str_functions(char *str, int expected_alpha, int expected_lowercase, int expected_numeric, int expected_printable, int expected_uppercase)
{
    int result_alpha = ft_str_is_alpha(str);
    int result_lowercase = ft_str_is_lowercase(str);
    int result_numeric = ft_str_is_numeric(str);
    int result_printable = ft_str_is_printable(str);
    int result_uppercase = ft_str_is_uppercase(str);

    printf("Input: \"%s\"\n", str);
    printf("ft_str_is_alpha: Result = %d, Expected = %d\n%s\n", result_alpha, expected_alpha, (result_alpha == expected_alpha) ? "PASS" : "FAIL");
    printf("ft_str_is_lowercase: Result = %d, Expected = %d\n%s\n", result_lowercase, expected_lowercase, (result_lowercase == expected_lowercase) ? "PASS" : "FAIL");
    printf("ft_str_is_numeric: Result = %d, Expected = %d\n%s\n", result_numeric, expected_numeric, (result_numeric == expected_numeric) ? "PASS" : "FAIL");
    printf("ft_str_is_printable: Result = %d, Expected = %d\n%s\n", result_printable, expected_printable, (result_printable == expected_printable) ? "PASS" : "FAIL");
    printf("ft_str_is_uppercase: Result = %d, Expected = %d\n%s\n", result_uppercase, expected_uppercase, (result_uppercase == expected_uppercase) ? "PASS" : "FAIL");
}

void test_str_transformations(char *str, char *expected_capitalize, char *expected_lowcase, char *expected_upcase)
{
    char buf[1000]; // Buffer to hold the transformed strings for comparison
    
    // Copy the input string to the buffer and test ft_strcapitalize
    strncpy(buf, str, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';
    printf("Original: \"%s\"\n", buf);
    printf("ft_strcapitalize: \"%s\"\n", ft_strcapitalize(buf));
    printf("Expected capitalize: \"%s\"\n", expected_capitalize);
    printf("Test capitalize: %s\n\n", strcmp(buf, expected_capitalize) == 0 ? "PASS" : "FAIL");

    // Copy the input string to the buffer and test ft_strlowcase
    strncpy(buf, str, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';
    printf("Original: \"%s\"\n", buf);
    printf("ft_strlowcase: \"%s\"\n", ft_strlowcase(buf));
    printf("Expected lowcase: \"%s\"\n", expected_lowcase);
    printf("Test lowcase: %s\n\n", strcmp(buf, expected_lowcase) == 0 ? "PASS" : "FAIL");

    // Copy the input string to the buffer and test ft_strupcase
    strncpy(buf, str, sizeof(buf) - 1);
    buf[sizeof(buf) - 1] = '\0';
    printf("Original: \"%s\"\n", buf);
    printf("ft_strupcase: \"%s\"\n", ft_strupcase(buf));
    printf("Expected upcase: \"%s\"\n", expected_upcase);
    printf("Test upcase: %s\n\n", strcmp(buf, expected_upcase) == 0 ? "PASS" : "FAIL");
}

void test_ft_strcat(char *dest, char *src, char *expected)
{
    char original_dest[256];
    strcpy(original_dest, dest);  // Save the original destination string
    ft_strcat(dest, src);
    if (strcmp(dest, expected) == 0)
        printf("PASS: %s + %s = %s\n", original_dest, src, dest);
    else
        printf("FAIL: %s + %s = %s (expected %s)\n", original_dest, src, dest, expected);
    printf("\n");
}

void test_ft_strcmp(char *s1, char *s2, int expected)
{
    int result = ft_strcmp(s1, s2);
    if (result == expected)
        printf("PASS: ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, result);
    else
        printf("FAIL: ft_strcmp(\"%s\", \"%s\") = %d (expected %d)\n", s1, s2, result, expected);
    printf("\n");
}

void test_ft_strcpy(char *dest, char *src, char *expected)
{
    char *result = ft_strcpy(dest, src);
    if (strcmp(result, expected) == 0)
        printf("PASS: ft_strcpy(dest, \"%s\") = \"%s\"\n", src, result);
    else
        printf("FAIL: ft_strcpy(dest, \"%s\") = \"%s\" (expected \"%s\")\n", src, result, expected);
    printf("\n");
}

void test_ft_strdup(char *src, char *expected)
{
    char *result = ft_strdup(src);

    if (result)
    {
        if (strcmp(result, expected) == 0)
            printf("PASS: ft_strdup(\"%s\") = \"%s\"\n", src, result);
        else
            printf("FAIL: ft_strdup(\"%s\") = \"%s\" (expected \"%s\")\n", src, result, expected);

        free(result); // Don't forget to free allocated memory
    }
    else
    {
        printf("FAIL: ft_strdup(\"%s\") returned NULL (expected \"%s\")\n", src, expected);
    }
    printf("\n");
}

void test_ft_strjoin(int size, char **strs, char *sep, char *expected)
{
    char *result = ft_strjoin(size, strs, sep);

    if (result)
    {
        if (strcmp(result, expected) == 0)
            printf("PASS: ft_strjoin(size=%d, sep=\"%s\") = \"%s\"\n", size, sep ? sep : "(null)", result);
        else
            printf("FAIL: ft_strjoin(size=%d, sep=\"%s\") = \"%s\" (expected \"%s\")\n", size, sep ? sep : "(null)", result, expected);

        free(result); // Free allocated memory
    }
    else
    {
        if (expected == NULL)
            printf("PASS: ft_strjoin(size=%d, sep=\"%s\") = NULL\n", size, sep ? sep : "(null)");
        else
            printf("FAIL: ft_strjoin(size=%d, sep=\"%s\") = NULL (expected \"%s\")\n", size, sep ? sep : "(null)", expected);
    }
    printf("\n");
}

void test_ft_strlcat()
{
    char dest[50];
    char src[50];
    unsigned int result;
    
    // Test 1: Basic concatenation with enough space
    strcpy(dest, "Hello, ");
    strcpy(src, "World!");
    result = ft_strlcat(dest, src, 50);
    printf("Test 1 - Expected: Hello, World!, Result: %s, Length: %d\n", dest, result);

    // Test 2: Concatenation with exact buffer size
    strcpy(dest, "Hello, ");
    strcpy(src, "World!");
    result = ft_strlcat(dest, src, 13);  // Total length is 13 ("Hello, World\0")
    printf("Test 2 - Expected: Hello, World, Result: %s, Length: %d\n", dest, result);

    // Test 3: Concatenation with size smaller than destination length
    strcpy(dest, "Hello, World!");
    strcpy(src, "12345");
    result = ft_strlcat(dest, src, 5);  // Size less than length of dest
    printf("Test 3 - Expected: Hello, World!, Result: %s, Length: %d\n", dest, result);

    // Test 4: Empty source string
    strcpy(dest, "Hello, World!");
    strcpy(src, "");
    result = ft_strlcat(dest, src, 50);
    printf("Test 4 - Expected: Hello, World!, Result: %s, Length: %d\n", dest, result);

    // Test 5: Empty destination string
    strcpy(dest, "");
    strcpy(src, "Hello, World!");
    result = ft_strlcat(dest, src, 50);
    printf("Test 5 - Expected: Hello, World!, Result: %s, Length: %d\n", dest, result);

    // Test 6: Both strings empty
    strcpy(dest, "");
    strcpy(src, "");
    result = ft_strlcat(dest, src, 10);
    printf("Test 6 - Expected: (empty string), Result: %s, Length: %d\n", dest, result);

    // Test 7: Destination buffer size too small (0 size)
    strcpy(dest, "Hello");
    strcpy(src, " World!");
    result = ft_strlcat(dest, src, 0);
    printf("Test 7 - Expected: Hello, Result: %s, Length: %d\n", dest, result);

    // Test 8: Source larger than remaining space in destination buffer
    strcpy(dest, "Hello");
    strcpy(src, " World!");
    result = ft_strlcat(dest, src, 8);  // Enough space only for " Wo\0"
    printf("Test 8 - Expected: Hello W, Result: %s, Length: %d\n", dest, result);
}

void test_ft_strlcpy(char *src, unsigned int size) {
    char dest[100];
    char expected_dest[100];
    unsigned int result, expected_result;
    
    // Using strlcpy to determine the expected result
    expected_result = strlcpy(expected_dest, src, size);

    // Running your ft_strlcpy function
    result = ft_strlcpy(dest, src, size);

    // Printing results
    printf("Source: \"%s\"\n", src);
    printf("Size: %u\n", size);
    printf("Expected Destination: \"%s\"\n", expected_dest);
    printf("Resulting Destination: \"%s\"\n", dest);
    printf("Expected Result: %u\n", expected_result);
    printf("Function Result: %u\n", result);
    printf("\n");

    // Validation
    if (result == expected_result && strcmp(dest, expected_dest) == 0) {
        printf("PASS!\n");
    } else {
        printf("FAIL!\n");
    }
    printf("\n");
}

void test_ft_strlen(char *str) {
    int result;
    int expected_result;

    // Using strlen to determine the expected result
    expected_result = strlen(str);

    // Running your ft_strlen function
    result = ft_strlen(str);

    // Printing results
    printf("String: \"%s\"\n", str);
    printf("Expected Length: %d\n", expected_result);
    printf("Function Result: %d\n", result);

    // Validation
    if (result == expected_result) {
        printf("PASS!\n");
    } else {
        printf("FAIL!\n");
    }
    printf("\n");
}

void test_ft_strncat(char *dest, char *src, unsigned int nb, char *expected) {
    char result[100];  // A buffer large enough to hold the concatenated string

    // Initialize result with the destination string
    strcpy(result, dest);

    // Call ft_strncat
    ft_strncat(result, src, nb);

    // Printing results
    printf("Destination: \"%s\"\n", dest);
    printf("Source: \"%s\"\n", src);
    printf("Nb: %u\n", nb);
    printf("Expected Result: \"%s\"\n", expected);
    printf("Function Result: \"%s\"\n", result);

    // Validation
    if (strcmp(result, expected) == 0) {
        printf("PASS!\n");
    } else {
        printf("FAIL!\n");
    }
    printf("\n");
}

void test_ft_strncmp(char *s1, char *s2, unsigned int n, int expected) {
    int result;

    // Call ft_strncmp
    result = ft_strncmp(s1, s2, n);

    // Printing results
    printf("String 1: \"%s\"\n", s1);
    printf("String 2: \"%s\"\n", s2);
    printf("Nb: %u\n", n);
    printf("Expected Result: %d\n", expected);
    printf("Function Result: %d\n", result);

    // Validation
    if (result == expected) {
        printf("PASS!\n");
    } else {
        printf("FAIL!\n");
    }
    printf("\n");
}

void test_ft_strncpy(char *src, unsigned int n, const char *expected) {
    char dest[100];  // Ensuring enough space for the destination buffer

    // Initialize the destination buffer to a known value
    memset(dest, 'X', sizeof(dest));
    dest[99] = '\0';  // Null-terminate the destination buffer just in case

    // Call ft_strncpy
    ft_strncpy(dest, src, n);

    // Printing results
    printf("Source: \"%s\"\n", src);
    printf("Nb: %u\n", n);
    printf("Expected Result: \"%s\"\n", expected);
    printf("Function Result: \"%s\"\n", dest);

    // Validation
    if (strncmp(dest, expected, n) == 0) {
        printf("PASS!\n");
    } else {
        printf("FAIL!\n");
    }
    printf("\n");
}

void test_ft_strstr(char *str, char *to_find, char *expected) {
    char *result;

    // Call ft_strstr
    result = ft_strstr(str, to_find);

    // Print the results
    printf("String: \"%s\"\n", str);
    printf("To Find: \"%s\"\n", to_find);
    printf("Expected Result: \"%s\"\n", expected ? expected : "NULL");
    printf("Function Result: \"%s\"\n", result ? result : "NULL");

    // Validation
    if (result == expected) {
        printf("PASS!\n");
    } else if (result && expected && strcmp(result, expected) == 0) {
        printf("PASS!\n");
    } else {
        printf("FAIL!\n");
    }
    printf("\n");
}

void test_ft_swap(int val1, int val2, int expected1, int expected2) {
    int a = val1;
    int b = val2;

    // Display initial values
    printf("Before ft_swap: a = %d, b = %d\n", a, b);

    // Call ft_swap
    ft_swap(&a, &b);

    // Display results
    printf("After ft_swap:  a = %d, b = %d\n", a, b);

    // Validate results
    if (a == expected1 && b == expected2) {
        printf("PASS!\n");
    } else {
        printf("FAIL! Expected a = %d, b = %d\n", expected1, expected2);
    }
    printf("\n");
}

void test_ft_ultimate_range(int min, int max, int expected_size, int expected_values[]) {
    int *range = NULL;
    int size = ft_ultimate_range(&range, min, max);

    // Display results
    printf("Testing ft_ultimate_range(min = %d, max = %d):\n", min, max);
    printf("Returned size: %d\n", size);

    // Check if the range is NULL when it should be
    if (expected_size == 0) {
        if (range == NULL && size == expected_size) {
            printf("PASS! Range is NULL as expected.\n");
        } else {
            printf("FAIL! Expected NULL range and size 0.\n");
        }
    } else {
        if (size == expected_size) {
            printf("PASS! Size is correct.\n");
        } else {
            printf("FAIL! Expected size %d but got %d.\n", expected_size, size);
        }

        // Verify the contents of the range array
        int passed = 1;
        for (int i = 0; i < size; i++) {
            if (range[i] != expected_values[i]) {
                printf("FAIL! At index %d, expected %d but got %d.\n", i, expected_values[i], range[i]);
                passed = 0;
            }
        }
        if (passed) {
            printf("Range array contents are correct.\n");
        }
    }
    printf("\n");

    // Free the allocated memory
    if (range) {
        free(range);
    }
}

int main()
{
    printf("=========================================\n");
    printf("=              TEST ft_atoi()            \n");
    printf("=========================================\n");

    printf("Basic tests: \n");
    test_ft_atoi("42", 42);
    test_ft_atoi("-42", -42);
    test_ft_atoi("+42", 42);

    printf("Leading whitespaces\n");
    test_ft_atoi("   42", 42);
    test_ft_atoi("\t\n\r\v\f42", 42);

    printf("Multiple signs\n");
    test_ft_atoi("--42", 42);
    test_ft_atoi("+-42", -42);
    test_ft_atoi("-+42", -42);
    test_ft_atoi("++42", 42);

    printf("Mixed with non-numeric characters\n");
    test_ft_atoi("42abc", 42);
    test_ft_atoi("-42abc", -42);
    test_ft_atoi("   42abc", 42);
    test_ft_atoi("abc42", 0);

    printf("Edge cases\n");
    test_ft_atoi("2147483647", 2147483647); // INT_MAX
    test_ft_atoi("-2147483648", -2147483648); // INT_MIN

    printf("Testing empty string and strings without digits");
    test_ft_atoi("", 0);
    test_ft_atoi("abc", 0);
    test_ft_atoi("    +  -12", 0); // Invalid sign position

    printf("\n");
    printf("=========================================\n");
    printf("=              TEST ft_is_prime()       =\n");
    printf("=========================================\n");
    
    printf("Basic tests: \n");
    test_ft_is_prime(2, 1);
    test_ft_is_prime(3, 1);
    test_ft_is_prime(4, 0);
    test_ft_is_prime(5, 1);
    test_ft_is_prime(10, 0);

    printf("Testing non-prime numbers\n");
    test_ft_is_prime(9, 0);
    test_ft_is_prime(15, 0);
    test_ft_is_prime(21, 0);
    test_ft_is_prime(25, 0);

    printf("Testing prime numbers\n");
    test_ft_is_prime(7, 1);
    test_ft_is_prime(11, 1);
    test_ft_is_prime(13, 1);
    test_ft_is_prime(17, 1);
    test_ft_is_prime(19, 1);

    printf("Edge cases\n");
    test_ft_is_prime(-5, 0);   // Negative number
    test_ft_is_prime(0, 0);    // Zero
    test_ft_is_prime(1, 0);    // One
    test_ft_is_prime(2147483647, 1);  // Largest 32-bit signed integer (prime number)

    printf("\n");
    printf("=========================================\n");
    printf("=             TEST ft_putnbr()          =\n");
    printf("=========================================\n");

    printf("Basic tests:\n");
    test_ft_putnbr(42);
    test_ft_putnbr(-42);
    test_ft_putnbr(0);
    test_ft_putnbr(7);
    test_ft_putnbr(-7);

    printf("Edge cases:\n");
    test_ft_putnbr(2147483647); // INT_MAX
    test_ft_putnbr(-2147483648); // INT_MIN
    test_ft_putnbr(123456789);
    test_ft_putnbr(-123456789);

    printf("\n");
    printf("=========================================\n");
    printf("=              TEST ft_putstr()         =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_ft_putstr("Hello, world!");
    test_ft_putstr("42");
    test_ft_putstr("This is a test.");

    printf("Test empty string\n");
    test_ft_putstr("");

    printf("Test with special characters\n");
    test_ft_putstr("Line 1\nLine 2\nLine 3");
    test_ft_putstr("Tab\tcharacter");

    printf("\n");
    printf("=========================================\n");
    printf("=              TEST ft_range()          =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_ft_range(0, 5);
    test_ft_range(-5, 5);
    test_ft_range(10, 15);

    printf("Edge cases\n");
    test_ft_range(5, 5); // min == max, should return NULL
    test_ft_range(10, 2); // min > max, should return NULL

    printf("Larger range\n");
    test_ft_range(-10, 10);

    printf("\n");
    printf("=========================================\n");
    printf("=        TEST ft_recursive_power()       =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_ft_recursive_power(2, 3);    // 2^3 = 8
    test_ft_recursive_power(5, 0);    // 5^0 = 1
    test_ft_recursive_power(7, 2);    // 7^2 = 49

    printf("Edge cases\n");
    test_ft_recursive_power(2, -3);   // Power < 0, should return 0
    test_ft_recursive_power(0, 5);    // 0^5 = 0
    test_ft_recursive_power(5, 1);    // 5^1 = 5

    printf("Special cases\n");
    test_ft_recursive_power(0, 0);    // 0^0 = 1 by convention
    test_ft_recursive_power(1, 100);  // 1^100 = 1 (large power with base 1)

    printf("\n");
    printf("=========================================\n");
    printf("=         TEST ft_sort_int_tab()        =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    int arr1[] = {5, 3, 8, 1, 2};
    test_ft_sort_int_tab(arr1, 5);

    int arr2[] = {10, 1, 3, 2, 8, 5};
    test_ft_sort_int_tab(arr2, 6);

    printf("Edge cases\n");
    int arr3[] = {1};  // Single element
    test_ft_sort_int_tab(arr3, 1);

    int arr4[] = {};   // Empty array
    test_ft_sort_int_tab(arr4, 0);

    printf("Already sorted\n");
    int arr5[] = {1, 2, 3, 4, 5};
    test_ft_sort_int_tab(arr5, 5);

    printf("All elements the same\n");
    int arr6[] = {7, 7, 7, 7};
    test_ft_sort_int_tab(arr6, 4);

    printf("\n");
    printf("=========================================\n");
    printf("=             TEST ft_sqrt()             =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_ft_sqrt(0, 0);          // sqrt(0) should be 0
    test_ft_sqrt(1, 1);          // sqrt(1) should be 1
    test_ft_sqrt(4, 2);          // sqrt(4) should be 2
    test_ft_sqrt(9, 3);          // sqrt(9) should be 3
    test_ft_sqrt(16, 4);         // sqrt(16) should be 4

    printf("Edge cases\n");
    test_ft_sqrt(-1, 0);         // Negative number should return 0
    test_ft_sqrt(2, 0);          // Non-perfect square should return 0
    test_ft_sqrt(15, 0);         // Non-perfect square should return 0
    test_ft_sqrt(25, 5);         // sqrt(25) should be 5

    printf("\n");
    printf("=========================================\n");
    printf("=         TEST STRING FUNCTIONS         =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_str_functions("Hello", 1, 0, 0, 1, 0); // Alphabetic but not all lower/upper/numeric
    test_str_functions("hello", 1, 1, 0, 1, 0); // Lowercase only
    test_str_functions("1234", 0, 0, 1, 1, 0); // Numeric only
    test_str_functions("Hello123", 0, 0, 0, 1, 0); // Mixed, printable
    test_str_functions("HELLO", 1, 0, 0, 1, 1); // Uppercase only

    printf("Edge cases\n");
    test_str_functions("", 1, 1, 1, 1, 1); // Empty string
    test_str_functions(" \t\n", 0, 0, 0, 0, 0); // Whitespace and control characters

    printf("\n");
    printf("=========================================\n");
    printf("=         TEST STRING TRANSFORMATIONS    =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_str_transformations("hello world", "Hello World", "hello world", "HELLO WORLD");
    test_str_transformations("   mixed CASE   ", "   Mixed Case   ", "   mixed case   ", "   MIXED CASE   ");
    test_str_transformations("123abc", "123abc", "123abc", "123ABC");

    printf("Edge cases\n");
    test_str_transformations("", "", "", "");
    test_str_transformations("123456", "123456", "123456", "123456"); // No letters to change

    printf("Special cases\n");
    test_str_transformations("a1b2c3", "A1b2c3", "a1b2c3", "A1B2C3");
    test_str_transformations("!@# hello WORLD !@#", "!@# Hello World !@#", "!@# hello world !@#", "!@# HELLO WORLD !@#");

    printf("\n");

    printf("=========================================\n");
    printf("=              TEST ft_strcat()         =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    char dest1_strcat[256] = "Hello";
    test_ft_strcat(dest1_strcat, " World!", "Hello World!");
    char dest2_strcat[256] = "foo";
    test_ft_strcat(dest2_strcat, "bar", "foobar");
    char dest3_strcat[256] = "";
    test_ft_strcat(dest3_strcat, "empty", "empty");

    printf("Test concatenation with empty strings\n");
    char dest4_strcat[256] = "";
    test_ft_strcat(dest4_strcat, "", "");
    char dest5_strcat[256] = "start";
    test_ft_strcat(dest5_strcat, "", "start");

    printf("Test concatenation of long strings\n");
    char dest6_strcat[256] = "This is a long string: ";
    test_ft_strcat(dest6_strcat, "and here is more.", "This is a long string: and here is more.");

    printf("Test concatenation resulting in buffer overflow\n");
    // Make sure dest has enough space to avoid overflow
    char dest7_strcat[256] = "Buffer";
    test_ft_strcat(dest7_strcat, " overflow test to ensure safety.", "Buffer overflow test to ensure safety.");

    printf("\n");
    printf("=========================================\n");
    printf("=              TEST ft_strcmp()         =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_ft_strcmp("apple", "apple", 0);
    test_ft_strcmp("apple", "banana", -1);
    test_ft_strcmp("banana", "apple", 1);

    printf("Edge cases\n");
    test_ft_strcmp("", "", 0);
    test_ft_strcmp("a", "", 97);
    test_ft_strcmp("", "a", -97);

    printf("Test identical strings of different lengths\n");
    test_ft_strcmp("short", "shorter", -101);
    test_ft_strcmp("shorter", "short", 101);

    printf("Test strings with different characters\n");
    test_ft_strcmp("abc", "abcd", -100);
    test_ft_strcmp("abcd", "abc", 100);

    printf("Test strings with different cases\n");
    test_ft_strcmp("hello", "Hello", 104 - 72);  // 'h' - 'H'
    test_ft_strcmp("Hello", "hello", 72 - 104);  // 'H' - 'h'

    printf("\n");
    printf("=========================================\n");
    printf("=              TEST ft_strcpy()         =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    char dest1[50];
    test_ft_strcpy(dest1, "Hello, world!", "Hello, world!");
    char dest2[50];
    test_ft_strcpy(dest2, "42", "42");
    char dest3[50];
    test_ft_strcpy(dest3, "", "");

    printf("Test with special characters\n");
    char dest4[50];
    test_ft_strcpy(dest4, "Line 1\nLine 2\nLine 3", "Line 1\nLine 2\nLine 3");
    char dest5[50];
    test_ft_strcpy(dest5, "Tab\tcharacter", "Tab\tcharacter");

    printf("\n");
    printf("=========================================\n");
    printf("=             TEST ft_strdup()          =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    test_ft_strdup("Hello, world!", "Hello, world!");
    test_ft_strdup("42", "42");
    test_ft_strdup("", "");

    printf("Test with special characters\n");
    test_ft_strdup("Line 1\nLine 2\nLine 3", "Line 1\nLine 2\nLine 3");
    test_ft_strdup("Tab\tcharacter", "Tab\tcharacter");

    printf("\n");
    printf("=========================================\n");
    printf("=             TEST ft_strjoin()         =\n");
    printf("=========================================\n");

    printf("Basic tests\n");
    // Basic concatenation with separator
    char *strs1[] = {"Hello", "World", "Test"};
    test_ft_strjoin(3, strs1, " - ", "Hello - World - Test");
    // Single string case
    char *strs2[] = {"Solo"};
    test_ft_strjoin(1, strs2, " - ", "Solo");
    // Empty input array
    test_ft_strjoin(0, NULL, " - ", "");

    printf("Test with empty and special characters\n");
    // Empty separator
    char *strs3[] = {"First", "Second", "Third"};
    test_ft_strjoin(3, strs3, "", "FirstSecondThird");
    // NULL separator
    char *strs4[] = {"One", "Two", "Three"};
    test_ft_strjoin(3, strs4, NULL, "");
    // Special characters
    char *strs5[] = {"Line 1\nLine 2\nLine 3"};
    test_ft_strjoin(1, strs5, " - ", "Line 1\nLine 2\nLine 3");
    char *strs6[] = {"Tab\tcharacter"};
    test_ft_strjoin(1, strs6, " - ", "Tab\tcharacter");

    printf("\n");
    printf("=========================================\n");
    printf("=            TEST ft_strlcat()          =\n");
    printf("=========================================\n");

    test_ft_strlcat();

    printf("\n");
    printf("=========================================\n");
    printf("=           TEST ft_strlcpy()           =\n");
    printf("=========================================\n");

    // Basic tests
    test_ft_strlcpy("Hello, world!", 20);
    test_ft_strlcpy("Hello, world!", 5);
    test_ft_strlcpy("42", 3);
    test_ft_strlcpy("", 1);
    test_ft_strlcpy("A long string to test the function", 10);

    // Edge cases
    test_ft_strlcpy("Edge case with size 0", 0);
    test_ft_strlcpy("Edge case with size 1", 1);
    test_ft_strlcpy("Just enough size", 18);

    printf("\n");
    printf("=========================================\n");
    printf("=              TEST ft_strlen()         =\n");
    printf("=========================================\n");

    // Basic tests
    test_ft_strlen("Hello, world!");
    test_ft_strlen("42");
    test_ft_strlen("");

    // Edge cases and special characters
    test_ft_strlen("A longer string with multiple characters.");
    test_ft_strlen("\n");
    test_ft_strlen("\tTab character");
    test_ft_strlen("String with \0 null character inside");

    printf("\n");
    printf("=========================================\n");
    printf("=            TEST ft_strncat()          =\n");
    printf("=========================================\n");

    // Basic tests
    test_ft_strncat("Hello", " world!", 7, "Hello world!");
    test_ft_strncat("foo", "bar", 3, "foobar");
    test_ft_strncat("foo", "bar", 2, "fooba");

    // Edge cases
    test_ft_strncat("", "Empty destination", 5, "Empty");
    test_ft_strncat("Non-empty", "", 5, "Non-empty");
    test_ft_strncat("Exact fit", " match", 6, "Exact fit match");
    test_ft_strncat("Partial", " truncate", 5, "Partial trun");

    printf("\n");
    printf("=========================================\n");
    printf("=            TEST ft_strncmp()          =\n");
    printf("=========================================\n");

    // Basic tests
    test_ft_strncmp("Hello", "Hello", 5, 0);
    test_ft_strncmp("Hello", "HelLo", 5, 1);
    test_ft_strncmp("Hello", "HelLo", 3, 0);
    test_ft_strncmp("Hello", "Hellp", 5, -1);

    // Edge cases
    test_ft_strncmp("Hello", "", 5, 1); // Non-empty vs empty string
    test_ft_strncmp("", "Hello", 5, -1); // Empty vs non-empty string
    test_ft_strncmp("Hello", "HelloWorld", 10, -1); // Matching initial characters but different lengths
    test_ft_strncmp("Hello", "Hello", 0, 0); // Zero length comparison

    // Test with special characters
    test_ft_strncmp("Hello\n", "Hello\n", 6, 0);
    test_ft_strncmp("Tab\t", "Tab\tcharacter", 4, 0);
    test_ft_strncmp("Tab\t", "Tab", 4, 1);

    printf("\n");
    printf("=========================================\n");
    printf("=            TEST ft_strncpy()          =\n");
    printf("=========================================\n");

    // Basic tests
    test_ft_strncpy("Hello, world!", 5, "Hello");
    test_ft_strncpy("Hello", 10, "Hello\0\0\0\0\0");  // The expected output contains null characters
    test_ft_strncpy("", 5, "\0\0\0\0\0");  // Copying from an empty string

    // Edge cases
    test_ft_strncpy("Hello", 0, "");  // Zero length copy
    test_ft_strncpy("Hi", 2, "Hi");  // Copying exact length
    test_ft_strncpy("Hi", 1, "H");  // Copying less than the length of the source string
    test_ft_strncpy("ABCDE", 7, "ABCDE\0\0");  // Copying more than the length of the source string

    // Test with special characters
    test_ft_strncpy("Line 1\nLine 2\n", 8, "Line 1\nL");
    test_ft_strncpy("Tab\tcharacter", 10, "Tab\tcharac");

    printf("\n");
    printf("=========================================\n");
    printf("=             TEST ft_strstr()          =\n");
    printf("=========================================\n");

    // Basic tests
    test_ft_strstr("Hello, world!", "world", "world!");
    test_ft_strstr("Hello, world!", "Hello", "Hello, world!");
    test_ft_strstr("Hello, world!", "!", "!");
    test_ft_strstr("Hello, world!", "z", NULL);  // 'z' is not in the string

    // Edge cases
    test_ft_strstr("Hello, world!", "", "Hello, world!");  // Empty string to find should return the original string
    test_ft_strstr("", "Hello", NULL);  // Searching in an empty string should return NULL
    test_ft_strstr("", "", "");  // Both empty strings should return the original string (empty)

    // Overlapping substrings
    test_ft_strstr("abababab", "abab", "abababab");  // Overlapping search term
    test_ft_strstr("abababab", "baba", "bababab");

    // Test with special characters
    test_ft_strstr("Line 1\nLine 2\nLine 3", "\nLine 2", "\nLine 2\nLine 3");
    test_ft_strstr("abc\tdef\tghi", "\tdef", "\tdef\tghi");

    printf("\n");
    printf("=========================================\n");
    printf("=               TEST ft_swap()          =\n");
    printf("=========================================\n");

    // Basic test cases
    test_ft_swap(1, 2, 2, 1);
    test_ft_swap(42, 21, 21, 42);
    test_ft_swap(-5, 10, 10, -5);

    // Edge cases
    test_ft_swap(0, 0, 0, 0);        // Both values the same (0)
    test_ft_swap(12345, 12345, 12345, 12345); // Both values the same (non-zero)
    test_ft_swap(-2147483648, 2147483647, 2147483647, -2147483648); // Swap INT_MIN and INT_MAX

    printf("\n");
    printf("=========================================\n");
    printf("=         TEST ft_ultimate_range()      =\n");
    printf("=========================================\n");

    // Test cases

    // Basic range test
    int expected1[] = {0, 1, 2, 3, 4};
    test_ft_ultimate_range(0, 5, 5, expected1);

    // Range with negative numbers
    int expected2[] = {-3, -2, -1, 0, 1, 2};
    test_ft_ultimate_range(-3, 3, 6, expected2);

    // Range with single element
    int expected3[] = {10};
    test_ft_ultimate_range(10, 11, 1, expected3);

    // Test where min >= max
    test_ft_ultimate_range(5, 5, 0, NULL);
    test_ft_ultimate_range(10, 5, 0, NULL);

    return 0;
}
