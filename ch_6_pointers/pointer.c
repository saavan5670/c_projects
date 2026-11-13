Syntax 

// int age =22              * -> value at adress oprater       & -> address of operator

// int *ptr =&age;        

// int _age =*ptr;

Declaring pointers

// int *ptr;
// char *ptr;
// float *ptr;

Formate Specifier

printf("%p", &age) -- variable ka address

printf("%p", ptr)

printf("%p", &ptr) -- address ka pointer

int age = 22
int *ptr = &age 

Address

printf("%p\n", &age); --- address of age 
 
printf("%p\n", &age); -- %u ubfube address ke liye hota hai

printf("%p", ptr); -- ye pointer ka address batayega

printf("%p", *ptr); -- to print value at pointer 

printf("%p", *(&age)); -- idoe bhi age ka address print hoga 

