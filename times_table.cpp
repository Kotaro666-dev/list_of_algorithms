/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   times_table.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:32:29 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 12:33:53 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> table(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            table.at(i).at(j) = (i + 1) * (j + 1);
        }
    }

    // output
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << table.at(i).at(j);
            if (j != N - 1)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }
}
