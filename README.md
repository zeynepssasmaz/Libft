# Libft
# 42 Cursus - libft

## Info

My implementation of some useful C functions and some additional ones to use it in future projects of 42.

- Status: still updating (I use libft a lot so I keep improving it)
- Result: 125%
- Observations: (null)

## How to install and use

- Clone libft into your project folder

```sh
git clone https://(https://github.com/zeynepssasmaz/Libft)
```

- Run make inside libft folder (make rules: all, clean, fclean, re)

```sh
make
```

- Include libft.h in the header of your C file

```c
#include <libft.h>
```

# :construction_worker: How to Run
```bash
# *************COMMANDS************ #
# run - run compile all the libtest with the your libft and run the all tests
$ make all
# clean - remove the .o and .c files 
$ make clean
# fclean - remove the .o and .c files and the .a
$ make fclean
# re - remove all files and remake all
$ make re

# after run one time the the comand all 
# you can use compile others files .c using this lib 
# and using the function of then.
$ gcc main.c -L . -lft
