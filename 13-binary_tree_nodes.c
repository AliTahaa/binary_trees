#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: the tree
 * Return: the number of nodes that with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node = node + ((tree->left || tree->right) ? 1 : 0);
		node = node + binary_tree_nodes(tree->left);
		node = node + binary_tree_nodes(tree->right);
		return (node);
	}
}
