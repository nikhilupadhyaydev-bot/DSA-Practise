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

void lis(){
    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.emplace_front(4);

    // remaining functions are same as vector but with different time complexities
}

void deq(){
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.emplace_front(4);
    d.pop_back();
    d.pop_front();
    d.back(); // returns the last element of the deque
    d.front(); // returns the first element of the deque

    // remaining functions are same as vector but with different time complexities
}

void sta(){
    stack<int> s;
    s.push(1);
    s.emplace(2);
    s.push(3);
    s.pop();
    cout << s.top() << endl; // returns the top element of the stack
    s.size(); // returns the number of elements in the stack
    s.empty(); // returns true if the stack is empty, false otherwise
}

void que(){
    queue<int> q;
    q.push(1);
    q.emplace(2);
    q.push(3);
    q.pop();
    cout << q.front() << endl; // returns the front element of the queue
    cout << q.back() << endl; // returns the back element of the queue
    q.size(); // returns the number of elements in the queue
    q.empty(); // returns true if the queue is empty, false otherwise
}

void pri_que(){
    priority_queue<int> pq; // max heap
    pq.push(1);
    pq.emplace(2);
    pq.emplace(3);
    cout << pq.top() << endl; // returns the maximum element in the priority queue
    pq.pop();
    cout << pq.top() << endl; // returns the next maximum element in the priority queue

    // min heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(1);
    min_pq.emplace(2);
    min_pq.emplace(3);
    cout << min_pq.top() << endl; // returns the minimum element in the priority queue
    min_pq.pop();
    cout << min_pq.top() << endl; // returns the next minimum element in the priority queue
}

void se(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.erase(2); // removes the element 2 from the set
    cout << s.count(1) << endl; // returns 1 if the element 1 is present in the set, 0 otherwise
    cout << s.size() << endl; // returns the number of elements in the set
    cout << s.empty() << endl; // returns true if the set is empty, false otherwise

    auto it = s.find(1); // returns an iterator to the element 1 if it is present in the set, s.end() otherwise
    if(it != s.end()){
        cout << "Element found in the set" << endl;
    }
    else{
        cout << "Element not found in the set" << endl;
    }


    s.erase(s.begin(), s.end()); // removes all elements from the set

    auto it1 = s.lower_bound(2); // returns an iterator to the first element that is not less than 2
    auto it2 = s.upper_bound(2); // returns an iterator to the first element that is greater than 2
}

void multi_set(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    cout << ms.count(1) << endl; // returns the number of instances of 1 in the multiset
    cout << ms.size() << endl; // returns the number of elements in the multiset
    cout << ms.empty() << endl; // returns true if the multiset is empty, false otherwise

    auto it = ms.find(1); // returns an iterator to the first instance of 1 if it is present in the multiset, ms.end() otherwise
    if(it != ms.end()){
        cout << "Element found in the multiset" << endl;
    }
    else{
        cout << "Element not found in the multiset" << endl;
    }

    ms.erase(1); // removes all instances of 1 from the multiset
}

void unordered__set(){
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    cout << us.count(1) << endl; // returns 1 if the element 1 is present in the unordered set, 0 otherwise
    cout << us.size() << endl; // returns the number of elements in the unordered set
    cout << us.empty() << endl; // returns true if the unordered set is empty, false otherwise

    auto it = us.find(1); // returns an iterator to the element 1 if it is present in the unordered set, us.end() otherwise
    if(it != us.end()){
        cout << "Element found in the unordered set" << endl;
    }
    else{
        cout << "Element not found in the unordered set" << endl;
    }

    us.erase(1); // removes the element 1 from the unordered set
}

void maps(){
    map<int, int> m;
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;
    cout << m[1] << endl; // returns the value associated with key 1
    cout << m.size() << endl; // returns the number of elements in the map
    cout << m.empty() << endl; // returns true if the map is empty, false otherwise

    auto it = m.find(1); // returns an iterator to the element with key 1 if it is present in the map, m.end() otherwise
    if(it != m.end()){
        cout << "Element found in the map" << endl;
    }
    else{
        cout << "Element not found in the map" << endl;
    }

    m.erase(1); // removes the element with key 1 from the map
}

void mulmap(){
    multimap<int, int> mm;
    mm.insert({1, 10});
    mm.insert({1, 20});
    mm.insert({2, 30});
    cout << mm.count(1) << endl; // returns the number of instances of key 1 in the multimap
    cout << mm.size() << endl; // returns the number of elements in the multimap
    cout << mm.empty() << endl; // returns true if the multimap is empty, false otherwise

    auto it = mm.find(1); // returns an iterator to the first instance of key 1 if it is present in the multimap, mm.end() otherwise
    if(it != mm.end()){
        cout << "Element found in the multimap" << endl;
    }
    else{
        cout << "Element not found in the multimap" << endl;
    }

    mm.erase(1); // removes all instances of key 1 from the multimap
}

void unordered__map(){
    unordered_map<int, int> um;
    um[1] = 10;
    um[2] = 20;
    um[3] = 30;
    cout << um[1] << endl; // returns the value associated with key 1
    cout << um.size() << endl; // returns the number of elements in the unordered map
    cout << um.empty() << endl; // returns true if the unordered map is empty, false otherwise

    auto it = um.find(1); // returns an iterator to the element with key 1 if it is present in the unordered map, um.end() otherwise
    if(it != um.end()){
        cout << "Element found in the unordered map" << endl;
    }
    else{
        cout << "Element not found in the unordered map" << endl;
    }

    um.erase(1); // removes the element with key 1 from the unordered map
}

void extra(){
    // algorithms
    // sort, reverse, max_element, min_element, accumulate, count, find, binary_search, lower_bound, upper_bound, next_permutation, prev_permutation, etc.

    // iterators
    // begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend()

    
}

int main(){
    // pairs();
    // vec();
    // lis();
    // deq();
    // sta();
    // que();
    // pri_que();
    // se();
    // multi_set();
    // unordered__set();
    // maps();
    // mulmap();
    // unordered__map();
    extra();
    return 0;
}