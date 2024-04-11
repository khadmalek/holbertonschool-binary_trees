#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node, 0 if node is NULL or no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/* Vérif si nœud est NULL, si pas de parent / si parent n'a pas de grand-pa*/
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

/* Vérifier si le nœud est le fils gauche de son parent */
	if (node->parent == node->parent->parent->left)
	return (node->parent->parent->right);
/* Retourner l'oncle (fils droit du grand-parent) */
	else
	return (node->parent->parent->left);
/* Retourner l'oncle (fils gauche du grand-parent) */
}
