#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the new node
 * @value: Value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        perror("Error: Insufficient memory!");
        return (NULL);
    }

    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;

    if (parent != NULL)
    {
        if (parent->n < value)
        {
            parent->right = new_node;
        }
        else if (parent->n > value)
        {
            parent->left = new_node;
        }
        else
        {
            perror("Error: Value already exists!");
            free(new_node);
            return (NULL);
        }
    }

    return (new_node);
}
