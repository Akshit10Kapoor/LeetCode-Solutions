int beautySum(char* s) {
    long long sum = 0;
    for(int i=0; s[i] != '\0'; i++){
        for(int j=i; s[j] != '\0'; j++ ){
            int hash[30] = {0};
            for(int k=i; k<=j; k++){
                int l = s[k];
                hash[l - 97]++;
            }
            int max = 0;
            int min = 500;
            for(int k=0; k<30; k++){
                if(hash[k] > max){
                    max = hash[k];
                }
                if(hash[k] < min && hash[k] > 0){
                    min = hash[k];
                }               
            }
            if(max - min > 0){
                sum += (max - min);
            }
            
        }
    }

    return sum;
}
