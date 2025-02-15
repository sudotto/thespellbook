#include <iostream>

#include "translate.h"

int main(int argc, char* argv[]){
	for(int i = 0; i < argc; i++){
		for(int j = 0; j < translations.size(); j++){
			if(translations[j].english == argv[i]){
				std::cout << translations[j].symbol << " ";
			}
		}
	}
	std::cout << "\n";
}
