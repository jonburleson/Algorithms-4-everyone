#include <stdio.h>

/**
* Change position method for swapping elements in position I and J.
*/

void change_position(int *positionI, int *positionJ){
	int aux;

	aux = *positionI;
	*positionI = *positionJ;
	*positionJ = aux;
}

/**
* Selection sort main method. Searches vector for the minimum and swaps it with the first position. 
* Then searches vector for the second lowest minimum and swaps it with the second position, etc.
* The current method arranges the vector from least to greatest.
*/

void selection_sort(int *vector, int Max_size){
	int i, j, position;

	for(i=0;i<(Max_size - 1);i++){
		position = i;
		
		for(j = i+1;j <Max_size;j++){
			
			if(vector[j] < vector[position]){
				position = j;
			}
		}

		if(i != position){
			change_position(&vector[i],&vector[position]);
		}
	}
}
