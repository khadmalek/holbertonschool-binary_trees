#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *         the parent is NULL, or if node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node is NULL or if the parent is NULL */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/* Determine if node is the left or right child of its parent */
	if (node->parent->left == node)
	{
	/* If node is the left child, return the right child (sibling) */
		return (node->parent->right);
	}
	else
	{
	/* If node is the right child, return the left child (sibling) */
	return (node->parent->left);
	}
}
