NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
#the prev line helps to automate the process of generating 
#the respective names for .o files, but do not generate them yet

GREEN = \033[0;92m
RESET_COLOR = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^
	@echo "$(GREEN)Compiled successfully :)$(RESET_COLOR)"

#! 👇 WHY DO WE NEED THIS PART IF EVRTH WORKS WITHOUT IT ???
# $(OBJS): $(SRCS)
# 	cc $(CFLAGS) -c $< -o $@

	
#$@ means the command which starts this rool, the target file for it - $(NAME)
#$^ means all the dependencies for that rool - $(OBJS)
#$< means to do for each dependency separately, with the corresponing src file

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
