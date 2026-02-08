# push_swap

*This project has been created as part of the 42 curriculum by fmohamed.*

## Description

Push_swap is a sorting algorithm project that challenges you to sort a stack of integers using a limited set of operations with the minimum number of moves possible. The program takes a list of integers as input and outputs the most efficient sequence of operations to sort them in ascending order.

The project uses two stacks (a and b) and a specific set of operations to manipulate them. The goal is to implement an efficient sorting algorithm that minimizes the number of operations while sorting stack a.

## Instructions

### Compilation

```bash
make
```

### Usage

```bash
./push_swap [list of integers]
```

**Example:**
```bash
./push_swap 2 1 3 6 5 8
```

**Output:**
```
sa
pb
pb
pb
sa
pa
pa
pa
```

### Error Handling

The program displays `Error` on standard error if:
- Arguments are not integers
- Arguments exceed integer limits
- Duplicate numbers are present

## Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the first 2 elements of stack a |
| `sb` | Swap the first 2 elements of stack b |
| `ss` | `sa` and `sb` at the same time |
| `pa` | Push the first element of b to a |
| `pb` | Push the first element of a to b |
| `ra` | Rotate stack a (shift up, first becomes last) |
| `rb` | Rotate stack b (shift up, first becomes last) |
| `rr` | `ra` and `rb` at the same time |
| `rra` | Reverse rotate a (shift down, last becomes first) |
| `rrb` | Reverse rotate b (shift down, last becomes first) |
| `rrr` | `rra` and `rrb` at the same time |

## Performance Benchmarks

For full validation (100%):
- Sort 100 random numbers in < 700 operations
- Sort 500 random numbers in < 5500 operations

For minimal validation (80%):
- 100 numbers in < 1100 operations and 500 numbers in < 8500 operations
- OR 100 numbers in < 700 operations and 500 numbers in < 11500 operations
- OR 100 numbers in < 1300 operations and 500 numbers in < 5500 operations

## Resources

- [Sorting algorithms - Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Stack data structure](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
- Push_swap project subject (42 Network)

**AI Usage:** No AI tools were used in the development of this project.