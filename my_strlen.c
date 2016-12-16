/*
** my_strlen.c for  in /home/yu_t/Hub/GIT
** 
** Made by yu_t
** Login   <yu_t@epitech.net>
** 
** Started on  Fri Dec 16 03:28:13 2016 yu_t
** Last update Fri Dec 16 03:28:33 2016 yu_t
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
