**____Prototype_____**
+ printf, fmeaning formatted, it supports formatted output
+ escaped sequence (\n, \t , \a,\r, \\)
+ Printf has a undetermined number of parameters ==> we use variable argument

**____Variable argument_____**
- While defining, it must have a fixed parameters (const char *)
- To use va_arg, you need to declare a variable type va_list
- 3 macros : va_start, va_arg, va_end
+ va_start(ap, last_arg)
>> ap = object of va_list hold the information needed to retrieve the additional argument with va_arg
>> last_arg = lst known fied argument being passed to the function 
+ va_arg 
>> will return the next element in the list(every time you call you advance in the list)   
- va_end, initialize "ap" to NULL and end the arguments

**____Fields_____**
- %c = the int argument is a character converted to an unsigned char; (simple write)
- %s = null-terminated string 
- %p =  Display the argument as an address in hexadecimal digits.
- %d && %i = int as a signed integer. %d and %i are synonymous for output, but are different when used with scanf for input (where using %i will interpret a number as hexadecimal if it's preceded by 0x, and octal if it's preceded by 0.) 
- %u = Print decimal unsigned int.
- %x && %X = unsigned int as a hexadecimal number. x uses lower-case letters and X uses upper-case.