void sortColors(int* nums, int numsSize) {
    int count[3] = {0};

    for(int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }

    int idx = 0;

    for(int color = 0; color < 3; color++) {
        while(count[color] > 0) {
            nums[idx++] = color;
            count[color]--;
        }
    }
}
