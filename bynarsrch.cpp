#include<iostream>
void babl(int *arr){
	int size = 10;
	for(int i = 0; i < size; ++i)
		for(int j = 1; j < size; ++j){
			if(arr[j] < arr[i]){
				std::swap(arr[j], arr[i]);
						}
						}	       
				for(int i = 0; i < size; ++i){
				std::cout<<arr[i]<<std::endl;
				}
						}


int main(){
	int size = 10;
	std::cout<<"Enter to array size"<<std::endl;


	int arr[size] ={5, 6, 8, 1,0, 7, 3, 7, 9, 1};

	babl(arr);
	
}
