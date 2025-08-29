#include <stdio.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return 0;
    }
    return stack[top--];
}

int evaluatePostfix(char* exp) {
    int i, val1, val2, result;
    for (i = 0; exp[i] != '\0'; i++) {
        if (isdigit(exp[i])) {
            push(exp[i] - '0');
        } else if (exp[i] == ' ') {
            continue;
        } else {
            val2 = pop();
            val1 = pop();
            switch (exp[i]) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
                default:
                    printf("Invalid operator: %c\n", exp[i]);
                    return 0;
            }
            push(result);
        }
    }
    return pop();
}

int main() {
    char exp[MAX];
    printf("Enter a postfix expression (single-digit operands, space separated):\n");
    fgets(exp, MAX, stdin);
    int result = evaluatePostfix(exp);
    printf("Result: %d\n", result);
    return 0;
}