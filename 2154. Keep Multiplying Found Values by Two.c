int findFinalValue(int* nums, int numsSize, int original) {

    int found;

    while (1) {
        found = 0;

        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == original) {
                original = original * 2;
                found = 1;
                break;
            }
        }

        if (found == 0) {
            break;
        }
    }

    return original;
}