#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Pointer to the root
 * 
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_count = 0;

	if (tree)
	{
		leaves_count += (!tree->left && !tree->right) ? 1 : 0;
		leaves_count += binary_tree_leaves(tree->left);
		leaves_count += binary_tree_leaves(tree->right);
	}
	return (leaves_count);
}

