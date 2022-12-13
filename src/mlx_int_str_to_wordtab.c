/*
** mlx_int_str_to_wordtab.c for MinilibX in 
** 
** Made by Charlie Root
** Login   <ol@epitech.net>
** 
** Started on  Wed Sep 13 11:36:09 2000 Charlie Root
** Last update Fri Dec 14 11:02:09 2001 Charlie Root
*/

#include	"mlx_int.h"

int	mlx_int_str_str(char *str, char *find, int len)
{
  	int		pos;
  	int		len_f;
  	char	*s;
  	char	*f;

  	len_f = strlen(find);
  	if (len_f > len)
    	return (-1);
  	pos = 0;
  	// TODO str[len_f - 1] ???
  	while (*(str + len_f - 1))
    {
      	s = str;
      	f = find;
      	while (*(f++) == *(s++))
      	{
        	if (!*f)
          		return (pos);
      	}
      	str++;
      	pos++;
    }
  	return (-1);
}

int	mlx_int_str_str_cote(char *str, char *find, int len)
{
  	int		pos;
  	int		cote;
  	int		len_f;
  	char	*s;
  	char	*f;

  	len_f = strlen(find);
  	if (len_f>len)
    	return (-1);
  	pos = 0;
  	cote = 0;
  	// TODO str[len_f - 1] ??
  	while (*(str + len_f - 1))
    {
      	if (*str == '"')
			cote = 1 - cote;
      	if (!cote)
		{
	  		s = str;
	  		f = find;
	  		while (*(f++) == *(s++))
	  		{
	    		if (!*f)
	      			return (pos);
	  		}
		}
      	str ++;
      	pos ++;
    }
  	return (-1);
}

char	**mlx_int_str_to_wordtab(char *str)
{
  	int		pos;
  	int		len;
  	int		nb_word;
  	char	**tab;

  	len = strlen(str);
  	pos = 0;
  	nb_word = 0;
  	while (pos < len)
  	{
  		// TODO str[pos] ??
    	while (*(str + pos) == ' ' || *(str + pos) == '\t')
      		pos++;
    	if (*(str + pos))
      		nb_word++;
      	// TODO str[pos] ??
    	while (*(str + pos) && *(str + pos) != ' ' && *(str + pos) != '\t')
      		pos ++;
  	}
  	tab = malloc((nb_word + 1) * sizeof(*tab));
  	if (!tab)
    	return (NULL);
  	pos = 0;
  	nb_word = 0;
  	while (pos < len)
    {
    	// TODO str[pos] ??
      	while (*(str + pos) == ' ' || *(str + pos) == '\t')
		{
	  		*(str + pos) = 0;
	  		pos++;
		}
    	// TODO str[pos] ??
      	if (*(str + pos))
		{
	  		tab[nb_word] = str + pos;
	  		nb_word++;
		}
    	// TODO str[pos] ??
      	while (*(str + pos) && *(str + pos) != ' ' && *(str + pos) != '\t')
			pos++;
    }
  	tab[nb_word] = 0;
  	return (tab);
}
