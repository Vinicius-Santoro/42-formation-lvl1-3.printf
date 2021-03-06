<h1>42-formation-lvl1-3.printf</h1>

### _Project 3: Printf - Third project for the formation of software engineers at school 42 São Paulo_

- This project consists of recreating the printf function from the <stdio.h> library.

<h1></h1>

### _The project provide to manage the following conversions:_

| Specifier    | Description                                |
|--------------|--------------------------------------------|
| %c           | Single character                           |
| %s           | String of characters                       |
| %p           | Pointer in hexadecimal                     |
| %d           | Signed decimal integer                     |
| %i           | Signed decimal integer                     |
| %u           | Unsigned decimal integer                   |
| %x           | Unsigned hexadecimal integer (lowercase)   |
| %X           | Unsigned hexadecimal integer (uppercase)   |
| %%           | Two followed "%" will write a "%"          |

<h1></h1>

## _Implementation files:_
	
- [`Makefile`](printf/Makefile)
- [`Header file`](printf/ft_printf.h)

## _Functions made in this project:_

- [`ft_printf`](printf/ft_printf.c) - it goes through the printf string and checks the formatting type.
- [`ft_types.c`](printf/ft_types.c) - format type check and return.
- [`libft.c`](printf/libft.c) - auxiliary functions for printf. (functions were done in the first project - Libft).
