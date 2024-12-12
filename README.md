# std::vector<bool> Size Discrepancy

This repository demonstrates a potential issue with the `std::vector<bool>` specialization in C++.  While generally more space-efficient, it can behave differently than other `std::vector` types, especially concerning size and iterator behavior.

The `bug.cpp` file contains code that highlights this discrepancy. The `bugSolution.cpp` file provides an alternative implementation using a standard `std::vector` to avoid the issue.

**Problem:**

The `std::vector<bool>` specialization is optimized for memory usage, but this optimization can lead to unexpected results when retrieving the size using `.size()` and then using that size with index-based access. The size might not reflect the number of elements accessible using indexing.

**Solution:**

The most robust solution is to avoid using `std::vector<bool>` altogether and use a standard `std::vector<bool>` instead. This guarantees consistent and predictable behavior regarding size and iterators.

Feel free to contribute to this repository with other instances of unexpected behavior or insights related to `std::vector<bool>`.