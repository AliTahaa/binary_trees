#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		height = (left > right) ? left : right;
		return (height);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 * Return: the balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, t = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		t = left - right;
	}
	return (t);
}
