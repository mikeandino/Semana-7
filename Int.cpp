#include "Int.h"

Int::Int(int pValue){
	value=pValue;
}

int Int::getValue(){
	return value;
}

void Int::setValue(int pValue){
	value=pValue;
}

int Int::operator+(Int& rvalue){
	int respuesta=value+rvalue.getValue();
	return respuesta;
}

bool Int::operator==(Int& rvalue){
	return value==rvalue.getValue();
}

Int::operator int(){
	return value;
}

Int::~Int(){

}
