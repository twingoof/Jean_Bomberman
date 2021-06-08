##
## EPITECH PROJECT, 2021
## B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
## File description:
## Makefile
##

NAME	=	unit-test

SRC		=	src/ecs/component/text/Text.cpp\
			src/ecs/entity/Entity.cpp\
			src/ecs/component/vector/Vector.cpp\
			src/ecs/component/vector3/Vector3.cpp\

TEST	=	tests/tests_Entity.cpp\

LDFLAGS	=	--coverage -lcriterion -I./src/ecs/component/ -I./src/ecs/component/text -I./src/ecs/entity/ \
			-I./src/ecs/component/vector/ -I./src/ecs/component/vector3/

CXX		=	g++

all		:
			$(CXX) -o $(NAME) $(SRC) $(TEST) $(LDFLAGS)
			./$(NAME)

clean	:
			$(RM) *.gc*

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	=	all clean fclean re