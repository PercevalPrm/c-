#include <iostream>

typedef int intt;

typedef struct mas{
	int *data;
	int *start;
	int size;
	int ind;
	mas(int a_size){
		size = a_size;
		data = (int*)malloc(sizeof(int) * size);
		start = data;
		ind = 0;
	}

	void push(int a){
		*data = a;
		*data++;
	}

	int getItem(int index){
		return *(start+index);
	}
	
	void print(){
		std::cout << getItem(ind) << std::endl;
		if(ind < size-1){
			ind++;
			print();
		}
	}
}array;

typedef int my;

struct test{
	my *x;
	my *y;
	my *z;
};



int main(){
	test p;
	p.x = (my*)malloc(sizeof(my));
	p.y = (my*)malloc(sizeof(my));
	p.z = (my*)malloc(sizeof(my));
	
	*p.x = 1;
	*p.y = 2;
	*p.z = 3;

	std::cout << *p.x << std::endl;

	
	system("PAUSE");
	return 0;
}



