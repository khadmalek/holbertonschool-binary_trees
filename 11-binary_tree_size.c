#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 * Return: Size of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If tree is NULL, it means the tree is empty, so return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	else
	{
	/* Calculate the sizes of the left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	/* Return the total size, which is 1 (for the current node) */
	/* plus the sizes of the left and right subtrees */
		return (1 + left_size + right_size);
	}
}
