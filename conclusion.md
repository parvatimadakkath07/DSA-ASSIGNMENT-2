# Final Conclusion

Sorted IDs: 102, 125, 147, 218, 275, 324, 389, 456.

For large fixed-length keys, Merge Sort is recommended when predictable performance is important because its worst-case time is always O(n log n). Quick Sort can be very fast in practice and usually uses less auxiliary memory, but a poor pivot can cause O(n^2).

Therefore, **Merge Sort is the safer choice for large fixed-length keys when guaranteed performance is preferred.**

Note: "digit position processed" is normally a Radix Sort trace; this submission follows the requested Merge Sort.
