#include "binary_trees.h"

/**
 * binary_tree_preorder - print elements of tree using pre-order traversal
 * @tree: the root node of the tree to traverse
 * @func: function to call for each node
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
