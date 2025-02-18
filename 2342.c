int main(){
	int lim, x, y;
	char c;

	scanf("%d", &lim);
	scanf("%d %c %d", &x, &c, &y);

	if(c == '+')
		if(x + y <= lim)
			printf("OK\n");
		else
			printf("OVERFLOW\n");
	if else (c == '*')
		if(x * y <= lim)
			printf("OK\n");
		else
			printf("OVERFLOW\n");

	return 0;
}
