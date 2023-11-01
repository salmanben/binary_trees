#include "binary_trees.h"

/**
 * binary_tree_nodes - counts counts the nodes
 * with at least 1 child in a binary tree
 * @tree: Pointer to the root
 * 
 * Return: the number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (tree->left != NULL && tree->right != NULL)
        return (1);
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

