#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree
 * Return: the size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0, right = 0, left = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		s = right + left + 1;
	}
	return (s);
}
