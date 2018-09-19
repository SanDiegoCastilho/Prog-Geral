int* InsertionSort(int* Vector, int SizeVector){
	int Key;

	for (int i = 1; i < SizeVector; i++){
		key = Vector[i];
		j = i - 1;

		while(j >= 0 && Vector[j] > Key){
			Vector[j+1] = Vector[j];
			i -= 1;
		}

		Vecotr[j+1] = Key
	}

	return Vector;
}