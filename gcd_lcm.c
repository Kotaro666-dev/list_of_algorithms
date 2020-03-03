/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gcd_lcm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:55:55 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/03 21:01:52 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
GCD = Greatest Common Divisor（最大公約数）
LCM = Least Common Multiple（最小公倍数）
 */

#include <stdio.h>

long int gcd(long int a, long int b)
{
    if (a % b == 0)
    {
        return (b);
    }
    else
    {
        return (gcd(b, a % b));
    }
}

long int lcm(long int a, long int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    long int a, b;
    scanf("%ld %ld", &a, &b);

    printf("GCD = %ld\n", gcd(a, b));
    printf("LCM = %ld\n", lcm(a, b));
    return 0;
}