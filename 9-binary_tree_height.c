#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* Initialize variables to store height of left and right subtrees */
	size_t left_size = 0;
	size_t right_size = 0;

	/* If the tree is empty, return 0 */
	if (!tree)
		return (0);

	/* If the left subtree is not NULL, calculate its height recursively */
	if (tree->left)
		left_size += 1 + binary_tree_height(tree->left);

	/* If the right subtree is not NULL, calculate its height recursively */
	if (tree->right)
		right_size += 1 + binary_tree_height(tree->right);

	/* Return the maximum height of left and right subtrees */
	return (left_size > right_size ? left_size : right_size);
}
