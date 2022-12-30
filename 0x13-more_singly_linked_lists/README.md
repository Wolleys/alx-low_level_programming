# More singly linked lists

# Resources
1. [Google](https://www.google.com/#q=linked+lists)
2. [Youtube](https://www.youtube.com/results?search_query=linked+lists)

# Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), **without the help of Google:**

## General
* When and why using linked lists vs arrays
* How to build and use linked lists

# Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
* Don’t forget to push your header file
* All your header files should be include guarded

# Tasks
Tasks table

| Task Name  | File Name | Description |
| --------------- | ------------------------------ |---------------------------------------------------------------|
| 0. Print list  | `0-print_listint.c`  | Print all the elements of a `listint_t` list |
| 1. List length | `1-listint_len.c` | Return the number of elements in a linked |
| 2. Add node | `2-add_nodeint.c` | Add a new node at the beginning of a `listint_t` list |
| 3. Add node at the end | `3-add_nodeint_end.c` | Add a new node at the end of a `listint_t` list |
| 4. Free list | `4-free_listint.c` | Free a `listint_t` list |
| 5. Free | `5-free_listint2.c` | Free a `listint_t` list |
| 6. Pop | `6-pop_listint.c` | Delete the head node of a `listint_t` linked list |
| 7. Get node at index | `7-get_nodeint.c` | Return the nth node of a `listint_t` linked list |
| 8. Sum list | `8-sum_listint.c` | Return sum of all the data (n) of a `listint_t` linked list |
| 9. Insert | `9-insert_nodeint.c` | Inert a new node at a given position |
| 10. Delete at index | `10-delete_nodeint.c` | Delete the node at index `index` of a `listint_t` linked list |
| 11. Reverse list | `100-reverse_listint.c` | Reverse a `listint_t` linked list |
| 12. Print (safe version) | `101-print_listint_safe.c` | Print a `listint_t` linked list |
| 13. Free (safe version) | `102-free_listint_safe.c` | Free a `listint_t` list |
| 14. Find the loop | `103-find_loop.c` | Find the loop in a linked list |
