#pragma once
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace System;
using namespace std;

class File {
	ofstream fileWrite; // Ofstream es una clase que permite crear la instancia para la escritura de un archivo, fichero de salida
	ifstream fileRead; // Fichero de entrada
	string text;
	int time;
public:
	File() {}
	~File() {}

	void readData() {
		fileRead.open("configuration.txt", ios::in); // Asociamos la apertura del archivo
		if (fileRead.fail()) { // Se usa para verificar si la secuencia ha generado algún error o falla
			fileRead.close();
			fileWrite.open("Configuration.txt", ios::out); // ios::out -> Modo salida (por defecto) / En caso de que no encuentre el archivo
			// se creara uno adicional
			fileWrite << "1000" << "\n"; // n
			fileWrite.close();
			fileRead.open("Configuration.txt", ios::in);
		}

		getline(fileRead, text); // Esta función lee una línea entera en un stream;
		// Alamacenamiento texto, incluyendo el caracter de la linea y terminación

		time = atoi(text.c_str()); // Función atoi ( se usará para convertir una cadena en entero (int), c_str() es un puntero temporal)
		// contenido es una cadena que apunta a una matrix de caractes

		fileRead.close();
	}

	int getTime() { return time; }
};
