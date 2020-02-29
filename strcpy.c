/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:38:28 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/29 21:41:35 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
strcpyの４段階の書き方
 */

void ft_strcpy(char *s, char *t)
{
    int i;

    i = 0;
    while ((s[i] == t[i]) != '\0')
        i++
}

void ft_strcpy(char *s, char *t)
{
    int i;

    i = 0;
    while ((*s == *t) != '\0')
    {
        s++;
        t++;
    }
}

void ft_strcpy(char *s, char *t)
{
    while ((*s++ == *t++) != '\0')
        ;
}

void ft_strcpy(char *s, char *t)
{
    while (*s++ == *t++)
        ;
}