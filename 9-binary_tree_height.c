#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: tree to measure the heuight
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_leaf = 0;
	size_t height_root = 0;

	if (!tree)
	{
		return (0);
	}
	height_leaf = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_root = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_leaf > height_root ? height_leaf : height_root);
}
