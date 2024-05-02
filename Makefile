CC = gcc 
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
HEADER = ft_printf.h ft_printf_utils.h
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
TEST_INC = $(wildcard _main_*.c)
TEST_SRC = $(wildcard main_*.c)
TEST_EXEC = $(TEST_SRC:main%.c=test%)
RM = rm -f

.PHONY: all clean fclean re test norm tclean run

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

tclean: 
	$(RM) $(TEST_EXEC)
	
aclean: tclean fclean
	
test: $(TEST_EXEC)

test_%: $(NAME) main_%.c $(TEST_INC)
	$(CC) $(CFLAGS) -o $@ $^
	
run: $(TEST_EXEC)
	for test in $^; do ./$$test; done
	
norm: 
	norminette $(HEADER) $(SRC)
