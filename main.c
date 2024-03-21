#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char *str = malloc(sizeof(long long));
    scanf("%[^\n]", str);
    int top3[3] = {INT_MIN, INT_MIN, INT_MIN};
    char *token = strtok(str, " ");
    while(token != NULL) {
        int num = atoi(token);
        if(num > top3[2]) {
            top3[2] = num;
            sort(top3, 3);
        }
        token = strtok(NULL, " ");
    }
    printf("%d", top3[2]);
    return 0;
}
