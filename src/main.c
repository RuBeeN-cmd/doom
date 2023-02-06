#include "doom.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

void	print_error(char *argv)
{
	write(2, argv, ft_strlen(argv));
	write(2, "\n", 1);
	exit(1);
}

void	check_argc(int argc)
{
	if (argc < 1)
		print_error("Too few arguments");
	else if (argc > 1)
		print_error("Too many arguments");
}

t_program	init_program(int argc, char *argv[])
{
	t_program	program;

	check_argc(argc);
	(void) argv;
	program.mlx = mlx_init(1000, 500, "DOOM", true);
	return (program);
}

int main(int argc, char *argv[])
{
	t_program	program;

	program = init_program(argc - 1, argv + 1);
	mlx_loop(program.mlx);
	mlx_terminate(program.mlx);
	return 0;
}
