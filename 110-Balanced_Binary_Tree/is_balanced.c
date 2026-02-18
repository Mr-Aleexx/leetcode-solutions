#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct tree_node {
    int val;
    struct tree_node *left;
    struct tree_node *right;
} tree_node;

int iterations;
bool balanced;

tree_node* new_node(int val, tree_node* left, tree_node* right) {
    tree_node* n = malloc(sizeof(tree_node));
    n->val = val;
    n->left = left;
    n->right = right;
    return n;
}

void free_tree(struct tree_node* node) {

    if(node == NULL) return;

    free_tree(node->left);
    free_tree(node->right);

    free(node);
} 

int dfs(struct tree_node* node) {
    iterations++;
    printf("iterations : %d\n", iterations);
    if (node == NULL) {
        return 0;
    }

    int left  = dfs(node->left);
    int right = dfs(node->right);
    printf("left %d right %d\n", left, right);
    if (abs(left - right) > 1) {
        balanced = false;
    }
    //printf("ret : %d\n",(left > right ? left : right) + 1);
    return (left > right ? left : right) + 1;
}


bool isBalanced(struct tree_node* root) {
    balanced = true;
    dfs(root);
    return balanced;
}

int main () {

    tree_node* root =
        new_node(3,
            new_node(9, NULL, NULL),
            new_node(20,
                new_node(15, NULL, NULL),
                new_node(7, NULL, NULL)
            )
        );


    printf("balanced: %s\n", isBalanced(root) ? "true" : "false");

    return 0;
}
