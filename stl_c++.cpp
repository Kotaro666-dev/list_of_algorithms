/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl_c++.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:48:14 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/10 16:08:46 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;

//* Using for reverse
// bool f(int x, int y)
// {
//     x > y;
// }

void vector_demo()
{
    vector<int> array = {11, 2, 3, 14};

    //* sort
    sort(array.begin(), array.end()); // O(NlogN)
    // result: array {2, 3, 11, 14}

    //* binary search
    bool present = binary_search(array.begin(), array.end(), 3); // true
    present = binary_search(array.begin(), array.end(), 4);      // false
    // Check if 3 exists in array

    array.push_back(100);
    // add number(ex.100) in the end of the array
    present = binary_search(array.begin(), array.end(), 100); // true

    array.push_back(100);
    array.push_back(100);
    array.push_back(100);
    array.push_back(100);
    array.push_back(123);
    // array = {2, 3, 11, 14, 100, 100, 100, 100, 100, 123}

    // * lowerbound & upperbound

    // Returns an iterator pointing to the first element in the range [first,last) which does not compare less than val.

    auto it = lower_bound(array.begin(), array.end(), 100);
    // >= 100  -> points to the first 100
    auto it2 = upper_bound(array.begin(), array.end(), 100);
    // > 100  -> points to 123
    // cout << *it << endl; // -> 100
    // cout << *it2 << endl; // -> 123
    // cout << &it << endl; // -> address of 100
    // cout << &it2 << endl; // -> address of 123
    // cout << it2 - it << endl; // 5

    //* sorting in reverse order
    // sort(array.begin(), array.end(), f);
    reverse(array.begin(), array.end());
    // for (int i = 0; i < array.size(); i++)
    // {
    //     cout << array.at(i) << " ";
    // }
}

void set_demo()
{
    set<int> S;
    // * set makes container to keep an ascending order
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    // Print out -> -10, -1, 1, 2
    // for (auto itr = S.begin(); itr != S.end(); ++itr)
    // {
    //     cout << *itr << " ";
    // }

    auto it = S.find(-1);
    //* when the number is not in a set, it points to end
    if (it == S.end())
    {
        cout << "not present" << endl;
    }
    else
    {
        cout << *it << " is present" << endl;
    }

    auto it2 = S.upper_bound(-1);
    auto it3 = S.upper_bound(0);
    cout << *it2 << " " << *it3 << endl;

    auto it4 = S.upper_bound(2);
    if (it4 == S.end())
    {
        cout << "not present" << endl;
    }
}

void map_demo()
{
}

int main(void)
{
    // vector_demo();
    // set_demo();
    map_demo();
}