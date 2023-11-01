#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the balance factor of a
 * binary tree
 * @tree: Pointer to the root
 * 
 * Return: the number of leaves
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
