/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libpiscine.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:43:20 by ipersids          #+#    #+#             */
/*   Updated: 2024/09/19 20:43:39 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPISCINE_H
#define LIBPISCINE_H

// ------------ LIBRARIES ------------- //
#include <unistd.h>
#include <stdlib.h>

// ------------- INTEGERS ------------- //
void    ft_swap(int *a, int *b);
void	ft_sort_int_tab(int *tab, int size);
void	ft_putnbr(int nb);
int	    ft_atoi(char *str);
int	    ft_recursive_power(int nb, int power);
int	    ft_sqrt(int nb);
int	    ft_is_prime(int nb);

// --------- INTEGERS && MEMORY -------- //
int *ft_range(int min, int max);
int	ft_ultimate_range(int **range, int min, int max);

// --------------- STRINGS ------------- //
void	        ft_putstr(char *str);
int             ft_strlen(char *str);
char	        *ft_strcpy(char *dest, char *src);
char	        *ft_strncpy(char *dest, char *src, unsigned int n);
int	            ft_str_is_alpha(char *str);
int	            ft_str_is_numeric(char *str);
int	            ft_str_is_lowercase(char *str);
int             ft_str_is_uppercase(char *str);
int	            ft_str_is_printable(char *str);
char	        *ft_strupcase(char *str);
char	        *ft_strlowcase(char *str);
char	        *ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	            ft_strcmp(char *s1, char *s2);
int	            ft_strncmp(char *s1, char *s2, unsigned int n);
char	        *ft_strcat(char *dest, char *src);
char	        *ft_strncat(char *dest, char *src, unsigned int nb);
char	        *ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

// --------- STRINGS && MEMORY --------- //
char	*ft_strdup(char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

#endif