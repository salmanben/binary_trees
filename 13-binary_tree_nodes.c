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
	size_t nodes_count = 0;

	if (tree)
	{
		nodes_count += (tree->left || tree->right) ? 1 : 0;
		nodes_count += binary_tree_nodes(tree->left);
		nodes_count += binary_tree_nodes(tree->right);
	}
	return (nodes_count);
}
