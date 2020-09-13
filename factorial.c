int factorial(int n){
	int f = 1;
	int i;
	for(i = 0 ; i < n ; i++){
		f = f * i;
	}
	return f;
}
