/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsornin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:34:16 by lsornin           #+#    #+#             */
/*   Updated: 2024/09/03 16:34:18 by lsornin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_first_row
{
	int		rmax;
	int		cmax;
	char	o;
	char	e;
	char	f;
}	t_fr;

typedef struct s_sol
{
	int	x;
	int	y;
	int	area;
}	t_sol;

typedef struct s_solv
{
	int		r;
	int		c;
	char	**tab;
}	t_solv;

int		ft_fr(char *s, t_fr *elem);
int		ft_size_col(char *s);
void	ft_show(char **tab);
int		ft_read(char *s);
char	*ft_stock(char *s, int space);
char	**ft_init2(char *s, t_fr *elem);
int		ft_check(int r, int c, t_fr elem, t_solv solv);
int		ft_max_cube(t_solv solv, t_fr e);
t_sol	ft_solve(t_solv solv, t_fr elem, t_sol sol);
float	ft_sqrt(int nb);
int		ft_area(int r1, int r2);
void	ft_f_tab(char **tab, t_sol sol, t_fr elem);
t_solv	init_t_solv(void);
t_sol	init_t_sol(void);
t_fr	init_t_fr(void);
int		ft_empty(char *s);
int		ft_first_line(char *s);
int		ft_printable(char *str);
int		ft_rows_cols(char *str, t_fr *elem);
int		ft_check_elem(t_fr *elem);
int		return_lign(char *str, t_fr elem);
char	*valid_init(char *s, t_fr *elem);
int		ft_samechar(char *s, t_fr *elem);
void	ft_process_map(char *str, int flag);
char	*valid_init_stand(t_fr *elem);
char	*ft_read_stand(void);
void	ft_free_tab(char **tab);

#endif
