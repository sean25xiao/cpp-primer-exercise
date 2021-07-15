+ `int *ip;` - pointer points to a `int` object
+ `&r = ip;` - Wrong! should be `*&r = ip`, it is a reference to pointer
+ `int i;` - integer
+ `int *ip = 0;` pointer points to a `int` object
+ `int *ip, ip2;` - ip is a pointer, `ip2` is an `int`