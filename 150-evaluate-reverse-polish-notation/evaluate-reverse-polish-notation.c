#pragma GCC optimize("O3", "unroll-loops")
int st[50001];
int top=-1;
void operation(char op){
    if (top==-1) return;
    int n2=st[top--];
    if (top==-1) return;
    int n1=st[top--];
    int x;
    switch(op){
        case '+': x=n1+n2; break;
        case '-': x=n1-n2; break;
        case '*': x=n1*n2; break;
        case '/': x=n1/n2; break;
    }
    st[++top]=x;
}

int evalRPN(char** tokens, int tokensSize) {
    for(register int  i=0; i<tokensSize; i++){
        char* s=tokens[i];
        if (strlen(s)>1 || isdigit(s[0])){
            int x=atoi(s);
            st[++top]=x;
        }
        else operation(s[0]);
    }
    if (top==-1) return 0;
        
    return st[top];
}