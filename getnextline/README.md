
*This project has been created as part of the 42 curriculum by fmohamed.*

# Get Next Line

## 📌 Description

**Get Next Line (GNL)** is a C function designed to read a file descriptor **line by line**. Each call to the function returns **one line**, including the newline character (`\n`) if present, until the end of the file (EOF) is reached.  

The goal of this project is to learn how to handle dynamic memory, manage buffers efficiently, and implement a robust line-reading function without relying on standard high-level input functions.  

This repository contains both the **mandatory version** and the **bonus version**, which supports multiple file descriptors simultaneously.

---

## 🛠 Algorithm & Implementation

The core algorithm works as follows:

1. **Buffer Management**  
   - A buffer of size `BUFFER_SIZE` is used to read chunks of data from the file descriptor.  
   - Data is appended to a static memory area that persists between function calls.

2. **Line Extraction**  
   - The function searches for the newline character in the memory.  
   - Once found, it extracts the line including `\n` and updates the memory to remove the returned line.

3. **Memory Safety**  
   - Dynamically allocated memory is carefully managed to prevent leaks.  
   - Helper functions like `ft_strjoin_free`, `ft_strdup`, `ft_strlcpy`, and `ft_strlcat` are used to manage strings safely.  

4. **Bonus Feature (Multiple FDs)**  
   - The bonus version stores a separate memory buffer for each file descriptor, allowing concurrent reading from multiple files.

**Justification:**  
This approach ensures **minimal system calls** by reading in chunks and storing leftover data, while keeping memory allocation controlled. It balances efficiency and correctness for line-based file reading in C.

---

## ⚙ Instructions

### Compilation
To compile your code, create a test file (e.g., `main.c`) and use:

```bash
gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=1024 -o gnl
````

For the bonus version:

```bash
gcc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=1024 -o gnl_bonus
```

### Execution

Run the program with any file descriptor:

```bash
./gnl <file_name>
```

The function will read and return lines one by one on each call.

---

## 📚 Resources

* **Documentation & Tutorials**

  * [Linux `read` system call manual](https://man7.org/linux/man-pages/man2/read.2.html)

* **AI Usage**

  * AI was used to only for documentation no extra work in gnl is done using ai

---

## 💡 Additional Notes

* **Static Memory** is used to keep track of data across function calls.
* **Edge Cases:** Handles empty files, files without newline characters, and large files efficiently.
* **Error Handling:** Returns `NULL` for invalid file descriptors, failed reads, or memory allocation errors.

---

## ⚙ Files in the Repository

* `get_next_line.c` & `get_next_line_bonus.c` – main GNL functions.
* `get_next_line_utils.c` & `get_next_line_utils_bonus.c` – helper functions for string operations.
* `get_next_line.h` & `get_next_line_bonus.h` – header files.

---

## 🔑 Example Usage

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("test.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}