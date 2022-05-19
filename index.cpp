#include <iostream>
#include <stdlib.h>
#include <time.h> 


using namespace std;

int selectionSort(int A[], int number) {
	int n = number; // n = A.length
	int smallest;
	for(int j = 0; j < n ; j++) {// for j = 1 to n - 1 (Se cambió el index)
		smallest = j; // smallest = j
		for(int i = j + 1; i < n; i++) { // for i = j + 1 to n
			if(A[i] < A[smallest]) { // if(A[i] < A[smallest])
				smallest = i; // smallest = i
			}	
		}
		// Exchange A[j] with A[smallest]
		int aux = A[j];
		A[j] = A[smallest];
		A[smallest] = aux;
	}
}

void print( int A[], int number) {
	for(int i = 0; i < number; i++) {
		printf("%i ", A[i]);
	}
}

int main () {
	srand(time(NULL));
	int number;
	cout << "Inserte el numero de elementos:";
	cin >> number;
	int array[number];
	//Generate random numbers
	for(int i = 0; i < number; i++) {
		array[i] = rand() % 100 + 1;
	}
	printf("Antes: \n");
	print(array, number);
	selectionSort(array, number);
	printf("\nDespues: \n");
	print(array, number);
}
