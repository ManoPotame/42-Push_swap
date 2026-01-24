.PHONY = clean fclean re all

NAME = push_swap

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isdigit.c \
		ft_isint.c \
		ft_lst_max_index.c \
		ft_lstadd_back.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_split.c \
		ft_strdup.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_substr.c \
		ft_swapint.c \
		algorithm.c \
		lst_manager.c \
		parsing.c \
		push_swap.c \
		rules.c \

CFLAGS = -Wall -Wextra -Werror -g

OBJDIR = Objet/

LIBFTDIR = Functions/Libft/

SWAPDIR = Functions/Push_swap/

OBJ = $(addprefix $(OBJDIR), $(SRC:.c=.o))

all: $(NAME)

$(OBJDIR)%.o: $(LIBFTDIR)%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJDIR)%.o: $(SWAPDIR)%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -drf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
