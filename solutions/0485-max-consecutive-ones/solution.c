int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int k = 0;
    int max = 0;
    for(int i=0; i<numsSize; i++){
        if(i!=numsSize){

            if(nums[i] == 1){
                k++;
            }
            else{
                if(k>max){
                    max = k;
                    k=0;
                }
                else{

                    k = 0;
                }
            }
        }
    
    }
    if(k>max){
        return k;
    }
    else{

        return max;
    }
    
}
