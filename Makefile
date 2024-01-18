NAME		=	libftprintf.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar -rcs
RM			=	rm -f

FILES 		=	ft_printf \
				ft_putchar \
				ft_putdec \
				ft_puthex_l \
				ft_puthex_s \
				ft_putptr \
				ft_putstr \
				ft_putundec \
				ft_printf \

SRCS_DIR	=	./
SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR	=	./
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

all: $(NAME)

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
		@$(CC) $(CFLAGS) -c -o $@ $<


$(NAME):	$(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@echo "Complilation successful!"

clean:
		@$(RM) $(OBJS)
		@echo "Cleaned ft_printf"

fclean: 	clean
		@$(RM) $(NAME)
		@echo "All files cleaned"

re: 		clean all
		@echo "Successfully cleaned and rebuilt ft_printf"

.PHONY: all clean fclean re	
