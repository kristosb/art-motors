# Pointers
## Declaration
int foo;  
int *foo_ptr = &foo;

int* ptr_a, ptr_b;   // Second is not a pointer!!!  
int *ptr_a, ptr_b;  // Second is pointer  
int ptr_b, *ptr_a;   // First not pointer, second is pointer  
int *ptr_a, *ptr_b;  // Both pointers, safest way  

## Dereferencing
int bar = *foo_ptr;  
*foo_ptr = 42; //Sets foo to 42  

## Arrays
int array[] = { 45, 67, 89 };    

int *array_ptr = array;  
printf(" first element: %i\n", *(array_ptr++));  
printf("second element: %i\n", *(array_ptr++));  
printf(" third element: %i\n", *array_ptr);  

printf("%i\n", array[0]);  

int array[] = { 45, 67, 89 };  
int *array_ptr = &array[1];  
printf("%i\n", array_ptr[1]);  

## Structs
struct foo {  
	size_t size;  
	char name[64];  
	int answer_to_ultimate_question;  
	unsigned shoe_size;  
};  

struct foo my_foo;  
my_foo.size = sizeof(struct foo);  

(*foo_ptr).size = new_size;  // One way to access member through struct pointer  
foo_ptr->size = new_size;  //better way  

## Multiple idirections  
int    a =  3;  
int   *b = &a;  
int  **c = &b;  
int ***d = &c;  


*d ==   c; //Dereferencing an (int ***) once gets you an (int **) (3 - 1 = 2)  
**d ==  *c ==  b; //Dereferencing an (int ***) twice, or an (int **) once, gets you an (int *) (3 - 2 = 1; 2 - 1 = 1)  
***d == **c == *b == a == 3; //Dereferencing an (int ***) thrice, or an (int **) twice, or an (int *) once, gets you an int (3 - 3 = 0; 2 - 2 = 0; 1 - 1 = 0)  

# Pointer and const  
const int *ptr_a;  // pointer to const value  
int const *ptr_a;  // same  

int *const ptr_b;  // const pointer to variable value  

# strings (no such thing)  
char str[] = "I am the Walrus";  //16 bytes, last is null (0)  

size_t strlen(const char *str) { //Note the pointer syntax here  
	size_t len = 0U;  
	while(*(str++)) ++len;  
	return len;  
}  










