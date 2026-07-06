#include <stdio.h>

int main() {
    int n;
    scanf("n: %d", &n);
    float scores[n];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%f", &scores[i]);
        sum += scores[i];
    }

    printf("Average: %.2f\n", sum / 3);

    return 0;
}