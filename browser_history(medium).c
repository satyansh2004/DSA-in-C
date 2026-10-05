#include <stdio.h>
#include <stdlib.h>

struct Node {
    char str[50];
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

char forwardstack[100][20] = {{'s', 'a'}, {'h', 'o'}};

void browserHistory() {
    
}

int main() {

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%c", forwardstack[i][j]);
        }
        printf("\n");
    }
    return 0;
}