# Comparison Table

| Feature | Merge Sort | Quick Sort |
|---|---|---|
| Major stages | 3 merge passes | 6 partitions observed |
| Best time | O(n log n) | O(n log n) |
| Average time | O(n log n) | O(n log n) |
| Worst time | O(n log n) | O(n^2) |
| Additional space | O(n) | O(log n) average |
| Stable | Yes | No |
| Predictable performance | Yes | Depends on pivot |
| Large fixed-length IDs | Recommended | Good average-case option |

Exact comparison counts depend on implementation and pivot choice.
