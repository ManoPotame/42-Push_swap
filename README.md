*This project has been created as part of the 42 curriculum by mcrenn.*

# 🔋 Push Swap

## :page_facing_up: Description:
The goal is to sort a stack of integers with as few operations as possible, using a limited set of instructions.
Nous devons trier les nombres passés en argument en utilisant deux stack

Pour se faire, nous devons utiliser 4 types de regles:
- `sa`, `sb`, `ss` → swap (échanger les deux premiers éléments)

- `pa`, `pb` → push (déplacer le sommet d’une pile vers l’autre)

- `ra`, `rb`, `rr` → rotate (faire monter le premier élément en bas)

- `rra`, `rrb`, `rrr` → reverse rotate (faire descendre le dernier en haut)

This project will teach us:
- La comprehension des algorithmes de tri.
- Comprendre en profondeur l'utilisation des listes chainées.
- Une utilisation du parsing plus poussée
- La gestion d'erreur et des free
- Une meilleure comprhésension des pointeurs.

## :straight_ruler: Instructions:
Pour obtenir push swap il faut le cloner ["the repository"](https://github.com/ManoPotame/42-Push_swap#) avec la commande:

```git clone https://github.com/ManoPotame/42-Push_swap.git```

Ensuite, il faut utiliser la commande `make` pour compiler le ["push_swap program"](https://github.com/ManoPotame/42-Push_swap/tree/main/Functions/Push_swap) et la ["libft library"](https://github.com/ManoPotame/42-Push_swap/tree/main/Functions/Libft).

Enfin, il faut executer la commande `./push_swap` avec la liste de nombres en désordre souhaitée:

```./push_swap 42 3 12 2005```

## :books: Resources:
- The ["Push_Swap guide"](https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376) wich I followed.
- I used ["Excalidraw"](https://excalidraw.com/) to summarize my project.
- And my 42 mates !

