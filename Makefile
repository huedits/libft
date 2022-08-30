NAME = libft.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

LIB_PATH = ./

SRCS = *.c

OBJS = *.o

all: $(NAME)
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS):
	gcc $(FLAGS) -I $(LIB_PATH) -c $(SRCS)

clean:
	$(REMOVE) *.o

fclean: clean
		$(REMOVE) $(NAME)

re: fclean all

git:
	git status
	echo "Commiting in 5 seconds"
	sleep 5
	git add *.c *.h Makefile
	git commit -m "Automatic commit from Makefile"
	git push