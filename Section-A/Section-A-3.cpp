// STL's in CPP
// STL stands for Standard Template Library. It is a powerful set of C++ template classes to provide general-purpose classes and functions with templates. It includes algorithms and data structures that allow programmers to use them without having to write them from scratch. The STL provides a collection of template classes and functions for data structures such as vectors, lists, queues, stacks, sets, maps, and algorithms for sorting, searching, and manipulating these data structures.

#include <bits/stdc++.h>
using namespace std;

// algorithms
// containers
// functions
// iterators

void pairs(){
    // store 2 elements
    pair<int,int> p = {1,1};
    cout << p.first << " " << p.second << endl;

    // store odd amount of elements
    pair<int,pair<int,int>> p1 = {1,{2,3}};
    cout << p.first << " " << p1.second.first << " " << p1.second.second << endl;

    // pair with arrays
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
}


int main(){
    pairs();
    return 0;
}