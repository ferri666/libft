# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffons-ti <ffons-ti@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 19:24:41 by ffons-ti          #+#    #+#              #
#    Updated: 2022/10/17 11:59:59 by ffons-ti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

NAME_BONUS		= libft_bonus.a

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_calloc.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_strdup.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c ft_strnstr.c \
					ft_memmove.c ft_strlen.c  ft_strrchr.c ft_substr.c \
					ft_toupper.c ft_isdigit.c ft_memchr.c  ft_memset.c \
					ft_strjoin.c ft_itoa.c    ft_strtrim.c ft_split.c \
					ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c
					
OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstnew_bonus.c \
					ft_lstadd_front_bonus.c \
					ft_lstsize_bonus.c \
					ft_lstlast_bonus.c \
					ft_lstadd_back_bonus.c \
					ft_lstdelone_bonus.c \
					ft_lstclear_bonus.c \
					ft_lstiter_bonus.c \
					ft_lstmap_bonus.c
		  
BONUS_OBJS = ${BONUS:.c=.o}

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)
				@echo "Libft.a created!"

all:			$(NAME) $(NAME_BONUS)

bonus:			$(NAME_BONUS)

$(NAME_BONUS):	$(NAME) $(BONUS_OBJS)
				@ar rcs $(NAME_BONUS) $(OBJS) $(BONUS_OBJS)
				@echo "With bonus!"		

clean:
				@$(RM) $(OBJS) $(BONUS_OBJS)
				@echo "Clean boys!"
				

fclean:			clean
				@$(RM) $(NAME) $(NAME_BONUS)
				@echo "Super clean boys!"

re:				fclean $(NAME)

rebonus:		fclean $(NAME_BONUS)

norm:			
				@norminette

.PHONY:			all clean fclean re bonus norm