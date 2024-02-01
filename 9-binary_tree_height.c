#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((lh > rh) ? lh : rh);
}
