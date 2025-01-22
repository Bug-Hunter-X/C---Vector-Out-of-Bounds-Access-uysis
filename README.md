# C++ Vector Out-of-Bounds Access
This example demonstrates a common error in C++: accessing elements in a `std::vector` beyond its valid range.

**The Bug:**
The code attempts to access and modify the 11th element (`ptr[10]`) of the vector `vec`, which only contains elements from index 0 to 9. Accessing memory outside the vector's allocated space leads to undefined behavior, potentially causing crashes or data corruption.

**How to Reproduce:**
Compile and run the provided `bug.cpp` code. The behavior might vary depending on the compiler and system, but it's likely to crash or produce unexpected results.

**Solution:**
The `bugSolution.cpp` file shows a corrected version. It adds a check to ensure the index is within the valid range before accessing the vector elements.

**Lesson Learned:**
Always carefully check your array and vector indices to avoid out-of-bounds access. This is a frequent source of errors in C++ and other languages. Consider using safer methods like `at()` to perform bounds-checked access.