int singleNumber(int* nums, int numsSize) {
    int val = 0;
    for(int i=0; i<numsSize; i++){
        val = val ^ nums[i];
    }
    return val;
}
