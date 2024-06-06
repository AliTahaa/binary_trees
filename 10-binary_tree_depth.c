#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: the root node of the tree to measure the height.
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	char i;

	i = (tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;
	return (i);
}
