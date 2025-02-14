int	check_colonne(char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		k = 4;
		if (tab[i][0] == "4")
		{
			while (j <= 4)
				tab[i][j] = j++;
		}
		if (tab[i][5] == "4")
		{
			while (j <= 4)
				tab[i][k--] = j++;
		}
		if (tab[i][0] == "1")
			tab[i][1] = 4;
		if (tab[i][5] == "1")
			tab[i][k] = 4;
		i++;
	}
}

int	check_ligne(char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		k = 4;
		if (tab[0][i] == "4")
		{
			while (j <= 4)
				tab[j][i] = j++;
		}
		if (tab[5][i] == "4")
		{
			while (j <= 4)
				tab[k--][i] = j++;
		}
		if (tab[0][i] == "1")
			tab[1][i] = 4;
		if (tab[5][i] == "1")
			tab[k][i] = 4;
		i++;
	}
}

char	start_l(char *segment, int spot, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (segment[i])
	{
		if (segment[i] > 0 || segment[i] < 5)
		{
			tab[spot][j] = segment[i];
			j++;
			i++;
		}
		else if (segment[i] == " ")
			i++;
		else
			return ("error");
	}
}

char	start_c(char *segment, int spot, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (segment[i])
	{
		if (segment[i] > 0 || segment[i] < 5)
		{
			tab[j][spot] = segment[i];
			j++;
			i++;
		}
		else if (segment[i] == " ")
			i++;
		else
			return ("error");
	}
}

char	doubl(char **tab)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if ((tab[0][i] == tab[-1][i]) && tab[0][i] != "2")
			return ("error");
		else if (tab[0][i] + tab[-1][i] < "5")
			return ("error");
		i++;
	}
	i = 1;
	while (i <= 4)
	{
		if ((tab[i][0] == tab[i][-1]) && tab[i][0] != "2")
			return ("error");
		else if (tab[i][0] + tab[i][-1] < "5")
			return ("error");
		i++;
	}
}
