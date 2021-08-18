### Overview
A function that returns a line read from a file descriptor.

### Prototype
```c
char	*get_next_line(int fd);
```

### Return Value
`get_next_line()` returns a line if it reads a file descriptor correctly or `NULL` if an error happens.
