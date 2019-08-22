# cs2100-pointer-func
Los punteros funcion pueden ayudar a simular polimorfismo! Vamos a divertirnos haciendo la funcion  bubblesort  usando punteros a funcion. 

### Objetivo

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
