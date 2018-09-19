void Merge(int* Vetor, int p, int q, int r){
	int N1 = q - p + 1;
	int N2 = r - q;

	int V1[N1 + 1], V2[N2 + 1];

	if (p == q){
		V1[0] = Vetor[p];
		V2[0] = Vetor[p+1];

	}else{
		for (int i = 0; i < N1; i++){
			V1[i] = Vetor[p + i];
		}

		for (int j = 1; j <= N2; j++){
			V2[j-1] = Vetor[q + j];
		}
	}


	V1[N1] = numeric_limits<int>::max();;
	V2[N2] = numeric_limits<int>::max();;

	int i= 0, j= 0;

	for (int k = p; k <= r; k++){
		if (V1[i] <= V2[j]){
			Vetor[k] = V1[i];
			i += 1;

		}else{
			Vetor[k] = V2[j];
			j += 1;
		}
	}
}

void MergeSort(int* Vetor, int p, int r){
	if (p < r){
		int q = (p + r) / 2;

		MergeSort(Vetor, p, q);
		MergeSort(Vetor, q+1, r);
		Merge(Vetor, p, q, r);
	}
}