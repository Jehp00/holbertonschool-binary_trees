#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a
 * node in a binary tree
 * @tree: pointer to the root node of the
 * tree to measure the size
 * Return: node's depth
 *         0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);
	for (depth = 0; tree->parent; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
