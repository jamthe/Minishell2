/*
** my_str.c for my_str in /home/elbouh_j/PSU_2014_minishell1
**
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
**
** Started on  Mon Jan 19 21:36:30 2015 jamal elbouhali
** Last update Mon Mar  9 14:57:07 2015 jamal elbouhali
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (1);
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  if (str == NULL)
    return (1);
  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}

void	*xmalloc(int n)
{
  void	*str;

  str = malloc(n);
  if (str == NULL)
    {
      write(2, "malloc failed", 13);
      return (NULL);
    }
  else
    return (str);
}

int	my_strncmp(char *s1, char *s2, int nb)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (1);
  while (s1[i] == s2[i] && s1[i] != 0 && i < nb - 1)
    i++;
  return (s1[i] - s2[i]);
}
