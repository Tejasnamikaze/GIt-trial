// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

// Create a node
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Inorder Traversal
void inorder(struct node *root)
{
    if (root != NULL)
    {
        // Traverse left
        inorder(root->left);

        // Traverse root
        printf("%d -> ", root->key);

        // Traverse right
        inorder(root->right);
    }
}

// Insert a node
struct node *insert(struct node *node, int key)
{
    // Return a new node if the tree is empty
    if (node == NULL)
        return newNode(key);

    // Traverse to the right place and insert the node
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node)
{
    struct node *current = node;

    // Find the leftmost leaf
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key)
{
    // Return if the tree is empty
    if (root == NULL)
        return NULL;
    if (root->right == NULL && root->left == NULL)
    {
        free(root);
        return NULL;
    }

    // Find the node to be deleted
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    else
    {
        // If the node is with only one child or no child
        /* if (root->left == NULL)
        {
            struct node *temp = root->right;
            root = temp;
            free(root->right);
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            root = temp;
            free(root->left);
        }
*/
        // If the node has two children
        struct node *temp = minValueNode(root);

        // Place the inorder successor in position of the node to be deleted
        root->key = temp->key;

        // Delete the inorder successor
        root->left = deleteNode(root->left, temp->key);
    }
    return root;
}
struct node *search(struct node *root, int val)
{
    if (root == NULL)
        return NULL;
    if (val == root->key)
        return root;
    if (val > root->key)
        return search(root->right, val);
    if (val < root->key)
        return search(root->left, val);
}

// Driver code
int main()
{
    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 9);
    root = insert(root, 14);
    root = insert(root, 4);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\nsearch=\n");
    if (search(root, 8))
        printf("found");
    else
        printf("not found");
    printf("\nAfter deleting \n");
    root = deleteNode(root, 7);
    printf("Inorder traversal: ");
    inorder(root);
}