#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the tree
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0, left = 0, right = 0, i = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		l = left + right;
		i = (!left && !right) ? l + 1 : l + 0;
		return (i);
	}
}
