#include "binary_trees.h"

/**
* binary_tree_node - Crée un nouveau nœud pour un arbre binaire
* @parent: Pointeur vers le nœud parent
* @value: Valeur à stocker dans le nouveau nœud
*
* Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Alloue de la mémoire pour le nouveau nœud */
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	/* Vérifie si l'allocation de mémoire a réussi */
	if (newNode == NULL)
	{
		/* Si l'allocation a échoué, retourne NULL */
		return (NULL);
	}

	/* Définit la valeur du nouveau nœud */
	newNode->n = value;

	/* Définit le parent du nouveau nœud */
	newNode->parent = parent;

	/* Initialise les enfants gauche et droit à NULL */
	newNode->left = NULL;
	newNode->right = NULL;

	/* Retourne le pointeur vers le nouveau nœud */
	return (newNode);
}
