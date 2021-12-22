`int i = 0;`

`double* dp = &i;` // Error, type does not match
`int *ip = i;` // Error, can only assign the address
`int *p = &i;` // OK assigne the address of i to the pointer p