NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = 		ft_calloc.c       ft_isdigit.c  ft_memcmp.c      ft_putchar_fd.c  ft_split.c  \
			ft_strjoin.c      ft_strmapi.c  ft_strtrim.c     ft_isalnum.c     ft_toupper.c  \
			ft_isprint.c      ft_memcpy.c   ft_putendl_fd.c  ft_strchr.c      ft_strlcat.c  \
			ft_strncmp.c      ft_substr.c   ft_atoi.c        ft_isalpha.c     ft_itoa.c  \
			ft_putnbr_fd.c    ft_strdup.c   ft_strlcpy.c     ft_strnstr.c     ft_tolower.c  \
			ft_bzero.c        ft_isascii.c  ft_memchr.c      ft_memset.c      ft_putstr_fd.c  \
			ft_striteri.c     ft_strlen.c   ft_strrchr.c     ft_memmove.c 
OBJS = $(SRCS:.c=.o)
BONUS = ft_lstnew.c 
BONUS_OBJS = $(BONUS:.c=.o);

GREEN = \033[0;92m
RESET_COLOR = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $(OBJS)
	@echo "$(GREEN)Compiled successfully ! 🎉$(RESET_COLOR)"

$(OBJS) : $(SRCS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $^
	@echo "$(GREEN)Compiled with bonus !! 🎉🎉$(RESET_COLOR)"


clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#$@ means the command which starts this rool, the target file for it - $(NAME)
#$^ means all the dependencies for that rool - $(OBJS)
#$< means to do for each dependency separately, with the corresponing src file

# NAME		=		libft.a

# SRC			= 		ft_calloc.c       ft_isdigit.c  ft_memcmp.c      ft_putchar_fd.c  ft_split.c  \
# 					ft_strjoin.c      ft_strmapi.c  ft_strtrim.c     ft_isalnum.c     ft_toupper.c  \
# 					ft_isprint.c      ft_memcpy.c   ft_putendl_fd.c  ft_strchr.c      ft_strlcat.c  \
# 					ft_strncmp.c      ft_substr.c   ft_atoi.c        ft_isalpha.c     ft_itoa.c  \
# 					ft_putnbr_fd.c    ft_strdup.c   ft_strlcpy.c     ft_strnstr.c     ft_tolower.c  \
# 					ft_bzero.c        ft_isascii.c  ft_memchr.c      ft_memset.c      ft_putstr_fd.c  \
# 					ft_striteri.c     ft_strlen.c   ft_strrchr.c     ft_memmove.c	  \

# OBJ			=		$(SRC:.c=.o)

# CC			=		gcc

# CFLAGS		=		-Werror -Wextra -Wall

# BONUS		=		ft_lstnew.c \

# B_OBJ		=		$(BONUS:.c=.o)

# all:				$(NAME)

# $(NAME):			$(OBJ)
# 							ar -crs $(NAME) $(OBJ)

# $(OBJ):				$(SRC)

# bonus:				$(OBJ) $(B_OBJ)
# 							ar -crs $(NAME) $(OBJ) $(B_OBJ)

# clean:
# 							rm -f $(OBJ) $(B_OBJ)

# fclean:				clean
# 							rm -f $(NAME)

# re:					fclean $(NAME)