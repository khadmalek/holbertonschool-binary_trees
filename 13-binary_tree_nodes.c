#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Initialize nodes_count to 0 */
	size_t nodes_count = 0;

	/* Check if the current node has at least one child */
	if (tree->left || tree->right)
	{
	/* Increment the count by 1 for the current node */
	nodes_count++;
	}

	/* Recursively count nodes in left and right subtrees */
	nodes_count += binary_tree_nodes(tree->left);
	nodes_count += binary_tree_nodes(tree->right);

	return (nodes_count);
}
