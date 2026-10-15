#include <stdlib.h>

struct Node {
    char ch;
    int freq;
    struct Node *left, *right;
};
struct Node* createNode(char ch, int freq) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->ch = ch;
    newNode->freq = freq;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void sort(struct Node* arr[], int n) {
	int i,j;
    for (i=0;i<n-1;i++) {
        for (j=0;j<n-i-1;j++) {
            if (arr[j]->freq > arr[j+1]->freq) {
                struct Node* temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
struct Node* buildHuffman(char ch[], int freq[], int n) {
    struct Node* arr[100];
    int i;
    for (i=0;i<n;i++)
        arr[i] = createNode(ch[i], freq[i]);
    while (n > 1) {
        sort(arr, n);
        struct Node* left = arr[0];
        struct Node* right = arr[1];
        struct Node* parent =
            createNode('$', left->freq + right->freq);
        parent->left = left;
        parent->right = right;
        arr[0] = parent;
        int i;
        for (i = 1; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    }
    return arr[0];
}
void printCodes(struct Node* root, int code[], int top) {
	int i;
    if (root->left) {
        code[top] = 0;
        printCodes(root->left, code, top + 1);
    }
    if (root->right) {
        code[top] = 1;
        printCodes(root->right, code, top + 1);
    }
    if (root->left == NULL && root->right == NULL) {
        printf("%c: ", root->ch);printf("%c: ", root->ch);
        for (i = 0; i < top; i++)
            printf("%d", code[i]);
        printf("\n");
    }
}
int main() {
    int n, i,freq[100], code[100];
    char ch[100];
    printf("Enter number of characters: ");
    scanf("%d", &n);
    printf("Enter character and frequency:\n");
    for (i = 0; i < n; i++)
        scanf(" %c %d", &ch[i], &freq[i]);
    struct Node* root = buildHuffman(ch, freq, n);
    printf("\nHuffman Codes:\n");
    printCodes(root, code, 0);

    return 0;
}
