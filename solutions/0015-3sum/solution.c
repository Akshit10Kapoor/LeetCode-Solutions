/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

    int capacity = 100000;
    int **result = malloc(capacity * sizeof(int*));

    int count = 0;

    *returnColumnSizes = malloc(capacity * sizeof(int));
    for(int i=0; i<numsSize; i++){
        for(int j=0; j<numsSize-i-1; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }


    for(int i=0; i<numsSize-2; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int j = i+1;
        int k = numsSize - 1;

        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0){
                j++;
            }
            else if( sum > 0){
                k--;
            }
            else{
                result[count] = malloc(3 * sizeof(int));
                result[count][0] = nums[i];
                result[count][1] = nums[j];
                result[count][2] = nums[k];
                (*returnColumnSizes)[count] = 3;
                count++;

                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j<k && nums[k] == nums[k+1]) k--;
                
            }

        }

    }

    *returnSize = count;
    return result;
}
