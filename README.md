*This project has been created as part of the 42 curriculum by mcrenn.*

# 🔋 Push Swap

## :page_facing_up: Description:
The goal is to sort a stack of integers with as few operations as possible, using a limited set of instructions.
We have to sort the numbers given as arguments using two stacks.

To do this, we have to use 4 types of rules:
- `sa`, `sb`, `ss` → swap (swap the two elements at the top of the stack)

- `pa`, `pb` → push (move the top of a stack to the top of the other stack)

- `ra`, `rb`, `rr` → rotate (the top element move to the bottom)

- `rra`, `rrb`, `rrr` → reverse rotate (the bottom element move to the top)

This project will teach us:
- The understanding of sorting algorithms.
- Learn in depth the chained list concept.
- A more intensive use of parsing.
- Error managing.
- A better comprehension of pointers.

## :straight_ruler: Instructions:
To get my push swap, you gave to clone ["the repository"](https://github.com/ManoPotame/42-Push_swap#) with the following command:

```git clone https://github.com/ManoPotame/42-Push_swap.git```

Next, you have to execute the `make` command to compile the ["push_swap program"](https://github.com/ManoPotame/42-Push_swap/tree/main/Functions/Push_swap) and the ["libft library"](https://github.com/ManoPotame/42-Push_swap/tree/main/Functions/Libft).

Finally, you must execute the `./push_swap` command with a list of random numbers:

```./push_swap 42 3 12 2005```

or

```./push_swap "42 3 12 2005"```

## :books: Resources:
- The ["Push_Swap guide"](https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376) I followed.
- The ["Push_Swap tester"](https://gitlab.com/nda-cunh/push_swap-testeur-max) I used to test my parsing and my sort algorithm.
- I used ["Excalidraw"](https://excalidraw.com/) to summarize my project.
- And my 42 mates !
