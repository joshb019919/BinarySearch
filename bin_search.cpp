/**
 * @file bin_search.cpp
 * @author Josh Borthick <jborthick019919@gmail.com>
 * @brief Utilize binary search to look for a number in an array.
 * @version 1.0
 * @date 2022-07-04
 *
 * @copyright Copyright (c) 2022 Josh Borthick
 *
 */

#include <iostream>
#include <chrono>

using std::cout;
using std::endl;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;

int main(void)
{
    int arr[]{2, 3, 5, 5, 8, 11, 12, 145};

    auto start = high_resolution_clock::now();
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start);
    cout << endl << "Duration: " << duration.count() << endl << endl;
}
