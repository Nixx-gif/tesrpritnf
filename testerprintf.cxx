#include "ft_printf.c"
#include "ft_printf_utils.c"

struct s_Point {
	int	x;
	int	y;
};

void	myfunction(void)
{
	return ;
}

void	modulo_p_testcase(void)
{
	int	*ptr1 = NULL;
	float j = 3.14f;
	float *ptr2 = &j;
	char c = 'A';
	char *ptr3 = &c;
	char *ptr4 = "Hello";
	int arr[5] = {1, 2, 3, 4 ,5};
	int *ptr5 = arr;
	struct s_Point p = {10, 20};
	struct s_Point *ptr6 = &p;
	int o = 42;
	int *ptr = &o;
	int **ptr7 = &ptr;
	void (*ptr8)() = myfunction;
	int *ptr10;
	printf("%d",ft_printf(0));
	printf("%d", printf(0));
	//ft_printf("myprintf :  %p %p \n\n", 0, 0);
	//printf("printf   :  %p %p ", 0, 0);
	//ft_printf("\n ft_printf > 1 : %p  | 2 : %p | 3 : %p | 4 : %p | 5 : %p | 6 : %p | 7 : %p | 8 : %p | 9 : %p | 10 : %p\n", ptr1, ptr2, ptr3, ptr4, ptr5, ptr6, ptr7, ptr8, o, ptr10);
	//printf("\n printf > 1 : %p   | 2 : %p | 3 : %p | 4 : %p | 5 : %p | 6 : %p | 7 : %p | 8 : %p | 9 : %p | 10 : %p\n", ptr1, ptr2, ptr3, ptr4, ptr5, ptr6, ptr7, ptr8, o, ptr10);
}

void	all_flags_testcase()
{
	int d = 6665;
	char c = 'N';
	char *s = "Nino";
	int *p = &d;
	int	i = 0x21;
	unsigned int u = -16666;
	int x = 565235235;
	int X = 45343;
	char *pc = &c;
	int a;
	int b;
	a = ft_printf("\nmyprintf > c : %c | s : %s | p : %p | d : %d | *p : %d | i : %i | u : %u | x : %x | X : %X | %% | pc : %p\n", c, s, p, d, *p, i, u, x, X, pc);
	b = printf("\nogprintf > c : %c | s : %s | p : %p | d : %d | *p : %d | i : %i | u : %u | x : %x | X : %X | %% | pc : %p\n", c, s, p, d, *p, i, u, x, X, pc);
	//a = ft_printf("fjhflkvauehfvkluejhglkejrhgliserjuhglverjhgvlkewruhglvoweirhg;voeirhgloveirhgloeiruhgveoirhgv");
	//b = printf("fjhflkvauehfvkluejhglkejrhgliserjuhglverjhgvlkewruhglvoweirhg;voeirhgloveirhgloeiruhgveoirhgv");	
	printf("a = %d | b = %d", a, b);
}
void	s_tester(void)
{
	char *str;
	str = NULL;
	int a;
	int b;
	a = ft_printf("NULL %s\n", str);
	b = printf("NULL %s\n", str);
	printf("a = %d b = %d\n", a, b);
}
int	main(void)
{
	modulo_p_testcase();
	//all_flags_testcase();
	//s_tester();
	//printf(ft_printf("%x\n", -1));
	//printf("%x", -1);
	return (1);
}
