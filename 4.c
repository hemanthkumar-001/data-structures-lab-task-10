#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[10];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int X;
    scanf("%d", &X);
    int left = 0, right = N - 1;
    int foundIndex = -1;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(arr[mid] == X) {
            foundIndex = mid;
            break;
        }
        else if(arr[mid] < X) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if(foundIndex != -1) {
        printf("The target value %d is present at index %d", X, foundIndex);
    } else {
        printf("The target value %d is not present in the array", X);
    }

    return 0;
}
