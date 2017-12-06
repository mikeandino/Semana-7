#include "ArrayStack.h"
#include "Object.h"

ArrayStack::ArrayStack(int pSize){
	size=pSize;
	array=new Object[size];
	for (int i = 0; i < size; i++) {
		array[i]=NULL;
	}
	availPos=0;
}
bool ArrayStack::push(Object dato){
	bool retval=false;

	if (availPos==size) {
		return retval;
	}else{
		array[availPos++]=dato;
		retval=true;
		return retval;
	}
}

bool ArrayStack::isEmpty(){
	return availPos==0;
}

char ArrayStack::pop(){
	if (isEmpty()) {
		return 0;
	}else{
		Object retval=array[availPos-1];
		array[availPos]=NULL;
		availPos--;
		return retval;
	}
}
ArrayStack::~ArrayStack(){
	for (int i = 0; i < size; i++) {
		if (array[i]!=NULL) {
			delete[] array[i];
		}
	}
	delete[] array;
}
