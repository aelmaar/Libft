/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabad <yabad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:36:25 by ael-maar          #+#    #+#             */
/*   Updated: 2023/04/01 14:01:03 by yabad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this enum identifies white spaces (man ascii)
enum {
	HT = 9,
	CR = 13,
	SP = 32
};

/*
 * skip_spaces		- 	skip spaces
 * 
 * Description 		: 	this function skips spaces if any
 * 
 * return			: 	void
 */
void	skip_spaces(const char *str, int *i)
{
	while ((str[*i] >= HT && str[*i] <= CR) || str[*i] == SP)
		(*i)++;
}

/*
 * check_sign		- 	check for sign
 * 
 * Description 		: 	check if the string contain '+' or '-'
 * 
 * return			: 	void
 */
void	check_sign(const char *str, short int *sign, int *i)
{
	if (str[*i] == '-')
	{
		*sign *= -1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
}

/*
 * get_number		- 	calculate the number
 * 
 * Description 		: 	get the number to be returned
 * 						using this math formula
 * 						*number = (*number * 10) + (*str - '0');
 * 
 * return			: 	void
 */
void	get_number(const char *str, long *number, int *i)
{
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		*number = (*number * 10) + (str[*i] - '0');
		(*i)++;
	}
}

/*
 * ft_atoi		- 	clone of the function atoi in stdlib library
 * @str 		: 	string that will be transformed to integer
 * 
 * Description 	: 	ft_atoi takes a string as a parameter
 * 					and return an integer.
 * 
 * return		: 	integer (eg: ft_atoi("+115") = 115)
 */
int	ft_atoi(const char *str)
{
	long		nb;
	short int	sign;
	int			i;

	sign = 1;
	nb = 0;
	i = 0;
	skip_spaces(str, &i);
	check_sign(str, &sign, &i);
	get_number((char *)str, &nb, &i);
	return (nb * sign);
}
