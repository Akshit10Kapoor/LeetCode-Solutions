void swap(int* nums ,int a, int b){
    int c;
    c = nums[a];
    nums[a] = nums[b];
    nums[b] = c;
}

int minimumSwaps(int* nums, int numsSize) {
    int k=0;
    int i = 0;
    if(numsSize == 1){
        return k;
    }
    int j = numsSize - 1;
    while(i<j){
        if(nums[i] == 0 && nums[j] != 0){
            swap(nums, i, j);
            i++;
            j--;
            k++;
        }

        if(nums[i] !=0 && nums[j] != 0){
            i++;
        }
        if(nums[i] != 0 && nums[j] == 0){
            i++;
            j--;
        }
        if(nums[i]==0 && nums[j] == 0 ){
            j--;
        }
        

    }
    return k;
}
