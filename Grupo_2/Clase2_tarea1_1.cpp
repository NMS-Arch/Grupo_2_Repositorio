#include "pch.h"

using namespace System;

public ref class Estudiante {
public:
	String^ Nombre; String^ Carrera; int Altura;

	Estudiante(String^ nombre, String^ carrera, int altura) {
		Nombre = nombre;
		Carrera = carrera;
		Altura = altura;
	}
};

int main(array<String^>^ args) {

	return 0;
}