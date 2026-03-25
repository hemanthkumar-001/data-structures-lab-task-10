#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[10];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);
    int left = 0, right = N - 1;
    int ans = -1; 

    while(left <= right) {
        int mid = (left + right) / 2;
        if(arr[mid] <= key) {
            ans = mid;       
            left = mid + 1;  
        } else {
            right = mid - 1;
        }
    }
    
    printf("%d", ans + 1);
    return 0;
}
