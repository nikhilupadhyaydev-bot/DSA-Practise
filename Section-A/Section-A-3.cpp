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

void vec(){
    // vector is a dynamic array
    vector<int> v;
    v.emplace_back(1); //Faster than push_back
    v.push_back(2);

    // vectors with pairs
    vector<pair<int,int>> vp;
    vp.emplace_back(1,2);
    vp.push_back({1,2});

    // multiple instances of a particular element
    vector<int> vt (5,20); // 5 instances of 20

    vector<int>::iterator it = v.begin();
    it++;
    cout << *it << endl;
    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rbegin(); // reverse iterator
    // vector<int>::iterator it = v.rend(); // reverse iterator

    // accessing elements of a vector
    // for(int i=0;i<5;i++){
    //     cin >> v.emplace_back();
    // }
    // // sort(v.begin(), v.end());
    // for(int i=0;i<5;i++){
    //     cout << v[i] << " ";
    // }
    for(auto it : v){
        cout << it << ' ';
    }

    // deleting in a vector
    v.erase(v.begin()+1); // deletes the element at index 1
    v.erase(v.begin(), v.begin()+2); // deletes the elements from index 0 to index 1

    // inserting in a vector
    v.insert(v.begin()+1, 10); // inserts 10 at index 1
    
    // inserting multiple elements in a vector
    v.insert(v.begin()+1, 3, 10); // inserts 3 instances of 10 at index 1

    // inserting a vector in another vector
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    v1.insert(v1.end(), v2.begin(), v2.end()); // inserts all elements of v2 at the end of v1

    // size of a vector
    cout << v.size() << endl; // returns the number of elements in the vector
    cout << v.capacity() << endl; // returns the capacity of the vector

    v.pop_back(); // removes the last element of the vector
    v1.swap(v2); // swaps the elements of v1 and v2
    v.clear(); // removes all elements from the vector
    cout << v.empty() << endl; // returns true if the vector is empty, false otherwise

}


int main(){
    // pairs();
    vec();
    return 0;
}