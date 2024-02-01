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

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}
