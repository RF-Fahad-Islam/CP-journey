#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to run the program with given input and capture output
int run_test(const char *input, const char *expected_output) {
    FILE *in = fopen("temp_input.txt", "w");
    fputs(input, in);
    fclose(in);

    char command[512];
    // Compile the code under test
    system("gcc ../Find_the_Missing_Number.c -o Find_the_Missing_Number.exe");
    snprintf(command, sizeof(command), "Find_the_Missing_Number.exe < temp_input.txt > temp_output.txt");
    system(command);

    FILE *out = fopen("temp_output.txt", "r");
    char output[1024] = {0};
    fread(output, 1, sizeof(output) - 1, out);
    fclose(out);

    // Clean up
    remove("temp_input.txt");
    remove("temp_output.txt");
    remove("Find_the_Missing_Number.exe");

    // Compare output (ignoring trailing whitespace)
    char *out_ptr = output + strlen(output) - 1;
    while (out_ptr >= output && (*out_ptr == '\n' || *out_ptr == '\r' || *out_ptr == ' ')) *out_ptr-- = '\0';

    char expected[1024];
    strcpy(expected, expected_output);
    char *exp_ptr = expected + strlen(expected) - 1;
    while (exp_ptr >= expected && (*exp_ptr == '\n' || *exp_ptr == '\r' || *exp_ptr == ' ')) *exp_ptr-- = '\0';

    return strcmp(output, expected) == 0;
}

int main() {
    int passed = 0, total = 0;

    // Test 1: Normal case, res divisible by a*b*c
    total++;
    passed += run_test(
        "1\n24 2 3 2\n",
        "2"
    );

    // Test 2: res is zero
    total++;
    passed += run_test(
        "1\n0 2 3 2\n",
        "0"
    );

    // Test 3: prod is zero (a=0)
    total++;
    passed += run_test(
        "1\n24 0 3 2\n",
        "-1"
    );

    // Test 4: prod is zero (b=0)
    total++;
    passed += run_test(
        "1\n24 2 0 2\n",
        "-1"
    );

    // Test 5: prod is zero (c=0)
    total++;
    passed += run_test(
        "1\n24 2 3 0\n",
        "-1"
    );

    // Test 6: res not divisible by prod
    total++;
    passed += run_test(
        "1\n25 2 3 2\n",
        "-1"
    );

    // Test 7: Multiple test cases
    total++;
    passed += run_test(
        "3\n24 2 3 2\n0 2 3 2\n25 2 3 2\n",
        "2\n0\n-1"
    );

    printf("Passed %d/%d tests.\n", passed, total);
    return passed == total ? 0 : 1;
}