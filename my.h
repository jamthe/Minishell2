/*
** my.h for my.h in /home/elbouh_j/PSU_2014_minishell1
**
** Made by jamal elbouhali
** Login   <elbouh_j@epitech.net>
**
** Started on  Thu Jan 22 13:56:51 2015 jamal elbouhali
** Last update Mon Mar  2 08:32:31 2015 jamal elbouhali
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <sys/types.h>
# include <signal.h>

void	show(char **tab);
char	*my_getenv(char *str, char **env);
void	*xmalloc(int size);
char	**word_tab(char *str, char j);
int	yy(char *str, char x);
int	xx(char *str, char x);
char	*get_env(char *str, char **env);
int	my_putstr(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);
char	*get_env(char *str, char **env);
int	check_builtin(char **com, char **env);
int	my_cd(char *com);
int	my_unsetenv();
int	my_setenv();
int	my_env(char **env);
int	my_exit();
int	check_exec(char **com, char **buf, char **env);
char	*my_strcpy(char *dest, char *src);
int	my_tab_len(char **env);
char	*my_strcat(char *dest, char *src);
char	**get_path(char **env);
char	**create_path(char **com, char **path);
int	exec(char **com, char **path, char **env, pid_t child);
int	my_strncmp(char *s1, char *s2, int nb);

#endif /* !MY_H_ */
