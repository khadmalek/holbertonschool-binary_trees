#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a binary
 * @tree: tree structur
 * @func: function (print)
 *
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Vérifie si l'arbre ou la fonction est NULL */
	if (!tree || !func)
		return;

	/* Parcours récursif du sous-arbre gauche en post-ordre */
	binary_tree_postorder(tree->left, func);

	/* Parcours récursif du sous-arbre droit en post-ordre */
	binary_tree_postorder(tree->right, func);

	/* Applique la fonction à la valeur du nœud courant */
	func(tree->n);
}
