#include<iostream>
void babl(int *arr){
	int size = 10;
	for(int i = 0; i < size; ++i)

		for(int j = 1; j < size; ++j){
			
			if(arr[j] < arr[i]){
				std::swap(arr[j], arr[i]);
				if(i == j){
					break;
				}	}
		}
}	
  	void getarr(int *arr, int size){			       
	for(int i = 0; i < size; ++i){
		std::cout<<arr[i]<<std::endl;
	}
}

int bysrc(int *arr, int s, int num){
	babl(arr);
	int i = 0;
	int j = s;
	
		int mid = i / 2 + j / 2;
		while(1){
		if(arr[mid] == num){
			return mid;
		}else if(arr[mid] > num){
			j = mid;
			--mid;
		}else{
			i = mid;
			++mid;
		}
		if (i == j){
			break;
		}
	}
	return -1;
}


	

int main(){
	int size = 10;
	std::cout<<"search digit in array"<<std::endl;
	int n = 0;
	std::cin>>n;	

	int arr[size] ={4, 8, 2, 9, 10, 5, 6, 8, 7, 9};

	std::cout<<bysrc(arr, size, n)<<std::endl;

}
