#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid input. Please enter a positive integer for the array size.\n");
    return 1;
}
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Element %d: ", i + 1);
            if (scanf("%d", &arr[i]) == 1) {
                break;
            } else {
                printf("Invalid input. Please enter an integer.\n");
                while (getchar() != '\n'); // Clear invalid input
            }
        }
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sear, foun = -1;
    printf("Enter the element to search: ");
    scanf("%d", &sear);

    for (int j = 0; j < n; j++) {
        if (arr[j] == sear) {
            foun = j;
            break;
        }
    }

    if (foun == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index: %d\n", foun);
    }

    free(arr);
    return 0;
}
    } else if (arr[mid] < sear) {
        low = mid + 1;
    } else {
        high = mid - 1;
    }
}

printf("%d",foun);


free(arr);
return 0;
}
