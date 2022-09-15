#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 *
 * Return: 1 if node is a leaf
 *         0 if is not a leaf
 *         0 if is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is perfect, 0 if is not perfect, 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *le, *ri;

	if (!tree)
	{
		return (0);
	}
	le = tree->left;
	ri = tree->right;
	if  (binary_tree_is_leaf(tree))
		return (1);
	if (!le || !ri)
	{
		return (0);
	}
	if (binary_tree_height(le) == binary_tree_height(ri))
	{
		if (binary_tree_is_perfect(le) && binary_tree_is_perfect(ri))
			return (1);
	}
	return (0);
}
