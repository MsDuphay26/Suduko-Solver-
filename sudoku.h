/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduphay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 00:12:26 by mduphay           #+#    #+#             */
/*   Updated: 2018/08/05 00:13:38 by mduphay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

int		validate(int **numbers, int row, int col, int value);
int		solve_sudoku(int **numbers, int value);

#endif
