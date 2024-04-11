#include "binary_trees.h"

/**
* binary_tree_is_leaf - Vérifie si un nœud est une feuille
* @node: Pointeur vers le nœud à vérifier
*
* Return: 1 si le nœud est une feuille, sinon 0. Si node est NULL, retourne 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL) /* Vérifie si le nœud est NULL */
		return (0);	  /* Retourne 0 car un nœud NULL n'est pas une feuille */

	if (node->left == NULL && node->right == NULL)
	/* Vérifie si le nœud n'a ni fils gauche ni fils droit */
		return (1);
	/* Retourne 1 car un nœud sans fils est une feuille */

	return (0);
	/* Si le nœud a des fils, retourne 0 car ce n'est pas une feuille */
}
