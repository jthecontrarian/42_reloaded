void    ft_union(char *s1, char *s2)
{
	int		i;
	char 	seen[256] = {0};

	i = 0;
	while (s1[i] != '\0')
	{
		if (seen[s1[i]] == 0)
		{
			write(1,&s1[i],1);
			seen[s1[i]] = 1;
		}
		i++;
	}	

	i = 0;
	while (s2[i] != '\0')
	{
		if (seen[s2[i]] == 0)
		{
			write(1,&s2[i],1);
			seen[s2[i]] = 1;
		}
		i++;
	}
}

int main(void)
{
	ft_union("abcd","cde");
	write(1,"\n",1);
	ft_union("zpadinton","paqefwtdjetyiytjneytjoeyjnejeyj");
	write(1,"\n",1);
	ft_union("","");
	write(1,"\n",1);
	ft_union("abc","");
	return (0);
}