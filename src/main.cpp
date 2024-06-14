#include <iostream>
#include <string>
#include <poppler/cpp/poppler-document.h>
#include <poppler/cpp/poppler-page.h>

int main(){
	std::cout << "Hello World" << std::endl;
	std::string fileName = "/test_files/ADRIANO T ALFORQUE NSCAS Growth Winter 2023 Grade 8.pdf";
	poppler::document* document = poppler::document::load_from_file(fileName);
}
