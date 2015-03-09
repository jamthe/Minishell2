/*
** my_str2.c for my_str2.c in /home/elbouh_j/PSU_2014_minishell1
**
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
**
** Started on  Tue Jan 27 18:15:30 2015 jamal elbouhali
** Last update Mon Mar  9 15:00:53 2015 jamal elbouhali
*/

#include <stdlib.h>
#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  if (s1 == NULL || s2 == NULL)
    return (1);
  i = 0;
 while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  if (s1 == NULL || s2 == NULL)
    return (1);
  if (s1[i] == '\0' && s2[i] == '\0')
    return (0);
  if (s1[i] < s2[i] || s1[i] > s2[i])
    return (1);
  return (0);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;
  int	j;

  if (dest == NULL || src == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (dest[i])
    i = i + 1;
  while (src[j])
    {
      dest[i] = src[j];
      j = j + 1;
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strcat(char *dest, char *src)
{
  char	*new;

  if (dest == NULL || src == NULL)
    return (NULL);
  new = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 3));
  if (new == NULL)
    return (NULL);
  new[0] = '\0';
  new = my_strcpy(new, dest);
  new[my_strlen(dest)] = '/';
  new[my_strlen(dest) + 1] = '\0';
  new = my_strcpy(new, src);
  return (new);
}
