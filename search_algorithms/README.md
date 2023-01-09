# Search algorithm

* In computer science, a search algorithm is an algorithm designed to solve a search problem. Search algorithms work to retrieve information stored within particular data structure, or calculated in the search space of a problem domain, with either discrete or continuous values.
* The appropriate search algorithm often depends on the data structure being searched, and may also include prior knowledge about the data. Search algorithms can be made faster or more efficient by specially constructed database structures, such as `search trees`, `hash maps`, and `database indexes`.
* Search algorithms can be classified based on their mechanism of searching into three types of algorithms: `linear`, `binary`, and `hashing`. 
    * `Linear search algorithms` check every record for the one associated with a target key in a linear fashion.
    * `Binary, or half-interval`, searches repeatedly target the center of the search structure and divide the search space in half. Comparison search algorithms improve on linear searching by successively eliminating records based on comparisons of the keys until the target record is found, and can be applied on data structures with a defined order.Digital search algorithms work based on the properties of digits in data structures by using numerical keys.
    * Finally, `hashing` directly maps keys to records based on a hash function.

[Source](https://en.wikipedia.org/wiki/Search_algorithm)

# Space Complexity

* The term Space Complexity is misused for Auxiliary Space at many places. Following are the correct definitions of `Auxiliary Space` and `Space Complexity`. 
    * `Auxiliary Space` is the extra space or temporary space used by an algorithm.
    * The `space Complexity` of an algorithm is the total space taken by the algorithm with respect to the input size. Space complexity includes both Auxiliary space and space used by input.

[Source](https://www.geeksforgeeks.org/g-fact-86/)