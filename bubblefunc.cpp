/*------DECLARATIONS------*/
#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void * _bubblesort_(void * _array_, void (*_puntero_) (void *, int _i, int _k)){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_,k,_k);
		return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_ (void * _vector_, int _i,int _k){
}

void  _b_float_ (void * _vector_, int _i,int _k){
}

void  _b_double_ (void * _vector_, int _i,int _k){
}

void  _b_char_ (void * _vector_, int _i,int _k){
}



/*------MAIN------*/
int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4,5,9,7,2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_);	
	_bubblesort_(_array_2,_b_float_);
	_bubblesort_(_array_3,_b_double_);
	_bubblesort_(_array_4,_b_char_);
    return 0;
}

