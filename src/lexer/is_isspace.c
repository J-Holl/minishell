/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:55:26 by jholl             #+#    #+#             */
/*   Updated: 2022/01/23 14:31:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	is_isspace(enum e_token_type type)
{
	if (type == TOK_ISSPACE)
		return (1);
	return (0);
}
