void	erase_values(int s1, int s2, int tab[s1][s2], char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	//printf("str :%s.\n", str);
	while (str[i] && i < 4)
	{
		if (str[i] == '0' && i < 3)
		{
			i++;
			continue ;
		}
		else if (str[i] == 0)
			return ;
		//printf("tab [%i][%i] = %i, str[%i] = %i\n", s1, i, tab[s1][i], i, str[i] - '0');
		if (tab[s1][i] == str[i] - '0')
		{
			//printf("box %i, erased value : %i, ", s1, tab[s1][i]);
			tab[s1][i] = 0;
			//printf("new value : %i\n\n", tab[s1][i]);
		}
		i++;
	}
	//printf("FINISH\n\n");
}

void	set_drive_value(int *j, int *offset, int value_j, int value_offset)
{
	*j = value_j;
	*offset = value_offset;
}

void	drive_trought_tab(int *i, int *j, int *offset)
{
	//printf("i : %i\n", i - 2);
	if (*i < 16)
		*j += 1;
	else
		*j += 4;
	if (*i == 8)
		set_drive_value(j, offset, 12, -4);
	if (*i == 16)
		set_drive_value(j, offset, 0, 1);
	if (*i == 24)
		set_drive_value(j, offset, 3, -1);
}

void	erase_imp(int s1, int s2, int tab[s1][s2], char *prms)
{
	int	i;
	int	j;
	int	offset;

	i = 0;
	j = 0;
	offset = 4;
	while (prms[i] && i <= 30)
	{
		if (prms[i] == '1')
			erase_values(j, s2, tab, "1230");
		if (prms[i] == '2')
			erase_values(j, s2, tab, "0004");
		if (prms[i] == '3')
			erase_values(j, s2, tab, "0034");
		if (prms[i] == '4')
		{	
			erase_values(j, s2, tab, "0234");
			erase_values(j + offset, s2, tab, "1034");
			erase_values(j + offset * 2, s2, tab, "1204");
			erase_values(j + offset * 3, s2, tab, "1230");
		}
		i += 2;
		drive_trought_tab(&i, &j, &offset);
	}
}
