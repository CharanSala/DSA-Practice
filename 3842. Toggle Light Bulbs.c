
#include <stdlib.h>

int* toggleLightBulbs(int* bulbs, int bulbsSize, int* returnSize) {
    int state[101] = {0};

    for (int i = 0; i < bulbsSize; i++) {
        int bulb = bulbs[i];
        state[bulb] = !state[bulb];
    }

    int* result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;

    for (int i = 1; i <= 100; i++) {
        if (state[i] == 1) {
            result[*returnSize] = i;
            (*returnSize)++;
        }
    }

    return result;
}
