int Combi(unsigned int order, unsigned int r){
	int p;

	for(unsigned int i = 1; i <= r; ++i){
		p = p * (n - i + 1) / i;
	}
	return p;
}
