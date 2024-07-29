#include <stdio.h>

using namespace std;

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    float avg = (float)sum / n;
    printf("The average of the numbers is: %.2f\n", avg);

    return 0;
}