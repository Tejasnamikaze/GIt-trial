
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d->", root->data);
        inorder(root->right);
    }
}
struct node *createnode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}
struct node *insert(struct node *root, int val)
{
    if (root == NULL)
        return createnode(val);

    else
    {

        if (root->data > val)

            root->left = insert(root->left, val);

        else
            root->right = insert(root->right, val);
        return root;
    }
}
struct node *inorderpre(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *delete (struct node *root, int val)
{
    struct node *ipre;
    if (root == NULL)
        return NULL;
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return root;
    }
    if (root->data > val)
        root->right = delete (root->right, val);
    else if (root->data < val)
        root->left = delete (root->left, val);
    else
    {
        ipre = inorderpre(root);
        root->data = ipre->data;
        root->left = delete (root->left, ipre->data);
    }
}
int main()
{
    struct node *root = NULL;

    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 9);
    printf("inorder\n");
    inorder(root);
    //delete (root, 9);
    // inorder(root);
    /* int n, i, t;
    struct node *p, *q, *root;
    root = NULL;
    printf("enter number of nodes in BST\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        printf("enter value %d=\n", i + 1);
        scanf("%d", &t);
        p->data = t;
        p->left = p->right = NULL;
        if (i == 0)
            root = p;
        else
        {
            printf("\nS\n");
            while (1)
            {
                q = root;
                if (q->data < p->data)
                {
                    if (q->right == NULL)
                    {
                        q->right = p;
                        break;
                    }

                    else
                        q = q->right;
                }
                if (q->data > p->data)
                {
                    if (q->left == NULL)
                    {
                        q->left = p;
                        break;
                    }

                    else
                        q = q->left;
                }
            }
        }
    }

    printf("inorder");
    inorder(root);
*/
    return 0;
}