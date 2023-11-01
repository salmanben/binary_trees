#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of the tree
 * @tree: Pointer to the root
 * 
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (binary_tree_size(treee->left) + binary_tree_size(tree->right) + 1);
}
