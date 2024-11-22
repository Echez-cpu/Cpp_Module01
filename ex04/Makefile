# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pokpalae <pokpalae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 18:31:25 by pokpalae          #+#    #+#              #
#    Updated: 2024/11/22 16:39:49 by pokpalae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replace

SRCS = main.cpp Helper.cpp
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
