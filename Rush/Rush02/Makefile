all: rush-02

rush-02 : mainxerrors.o func.o func2.o parsing.o func3.o func4.o
	cc -o rush-02 mainxerrors.o func.o func2.o parsing.o func3.o func4.o -Wall -Wextra -Werror

mainxerrors.o : mainxerrors.c
	cc -o mainxerrors.o -c mainxerrors.c -Wall -Wextra -Werror
	
func.o : func.c
	cc -o func.o -c func.c -Wall -Wextra -Werror
	
func2.o : func2.c
	cc -o func2.o -c func2.c -Wall -Wextra -Werror
	
parsing.o : parsing.c
	cc -o parsing.o -c parsing.c -Wall -Wextra -Werror
	
func3.o : func3.c
	cc -o func3.o -c func3.c -Wall -Wextra -Werror
	
func4.o : func4.c
	cc -o func4.o -c func4.c -Wall -Wextra -Werror
	
fclean :
	rm -rf *.o rush-02
