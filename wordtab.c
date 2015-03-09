/*
** wordtab.c for wordtab.c in /home/elbouh_j/str_to_world_tab
**
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
**
** Started on  Wed Jan 28 11:25:53 2015 jamal elbouhali
** Last update Mon Mar  2 08:19:13 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"

char	**word_tab(char *str, char x)
{
  char	**tab;
  int	a;
  int	b;
  int	c;

  a = 0;
  c = 0;
  if (str == NULL)
    return (NULL);
  if ((tab = xmalloc(sizeof(*tab) *((yy(str, x) + 1)))) == NULL)
    return (NULL);
  while (str[a] != '\0')
    {
      while (str[a] == x)
	a = a + 1;
      if ((tab[c] = xmalloc(sizeof(char) *(xx(str + a, x) + 1))) == NULL)
	return (NULL);
      b = 0;
      while ((str[a] != x && str[a] != '\0'))
	tab[c][b++] = str[a++];
      tab[c][b] = '\0';
      c = c + 1;
    }
  tab[c] = NULL;
  return (tab);
}
