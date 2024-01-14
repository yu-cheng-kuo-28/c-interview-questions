#include <stdio.h>

union Data {
    int intValue;
    char charValue;
    float floatValue;
};

int main() {
    union Data data;
    int typeSelector;

    // Display the size of the union
    printf("Size of union Data: %lu bytes\n", sizeof(data));

    // Prompt the user to enter the type of data (1 for int, 2 for char, 3 for float)
    printf("Enter type (1 for int, 2 for char, 3 for float): ");
    scanf("%d", &typeSelector);

    switch (typeSelector) {
        case 1:
            printf("Enter integer: ");
            scanf("%d", &data.intValue);
            break;
        case 2:
            printf("Enter character: ");
            scanf(" %c", &data.charValue); // Note the space before %c to catch any newline character
            break;
        case 3:
            printf("Enter float: ");
            scanf("%f", &data.floatValue);
            break;
        default:
            printf("Invalid type selected.\n");
            return 1;
    }

    // Output the values of all members of the union.
    // What do you observe about the values of members not selected?
    printf("Int: %d, Char: %c, Float: %f\n", data.intValue, data.charValue, data.floatValue);

    return 0;
}
