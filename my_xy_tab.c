/*
** my_xy_tab.c for XY in /home/elbouh_j/PSU_2014_minishell1
** 
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
** 
** Started on  Sun Feb  1 23:36:43 2015 jamal elbouhali
** Last update Sun Feb  1 23:37:32 2015 jamal elbouhali
*/

#include "my.h"

int     yy(char *str, char x)
{
  int   i;
  int   j;

  i = 0;
  j = 1;
  while (str[i] != '\0')
    {
      if (str[i] == x && str[i + 1] != '\0')
        j++;
      i++;
    }
  return (j);
}

int     xx(char *str, char x)
{
  int   i;

  i = 0;
  while ((str[i] != '\0') && (str[i] != x))
    i++;
  i++;
  return (i);
}
