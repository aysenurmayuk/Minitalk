NAME = minitalk.a
CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -rf

PRINTF=ft_printf/libftprintf.a

CLIENT=client
SERVER= server

OBJS= $(SRCS:.c=.o)

SRCS= client.c server.c


all: $(NAME)

$(NAME) : $(SERVER) $(CLIENT) $(OBJS)

$(SERVER): $(OBJS)
	make -C ./ft_printf
	$(CC) $(CFLAGS) server.c $(PRINTF) -o $@

$(CLIENT): $(OBJS)
	$(CC) $(CFLAGS) client.c $(PRINTF) -o $@


clean:
	make clean -C ./ft_printf
	$(RM)  $(OBJS) 

fclean: clean
	$(RM) $(CLIENT) $(SERVER) 
	make fclean -C ./ft_printf

re: fclean all

.PHONY : all clean fclean re