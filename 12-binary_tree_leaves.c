#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree) /* Si l'arbre est vide */
		return (0);

	if (!tree->right && !tree->left) /* Si le nœud actuel est une feuille */
		return (1);

	/* Récursivement, on compte les feuilles dans le sous-arbre gauche */
	/* et dans le sous-arbre droit, puis on les additionne */
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
