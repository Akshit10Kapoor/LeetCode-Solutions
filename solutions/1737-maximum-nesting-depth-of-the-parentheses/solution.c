int maxDepth(char* s) {
    int max = 0;
    int stack[20];
    int top = -1;

    for(int i=0; s[i] != '\0'; i++){
        if(s[i] == '('){
            stack[++top] = s[i];
            if(top+1 >max){
                max = top+1;
            }
        }
        else if(s[i] == ')'){
            top--;
        }
    }
    return max;
}
