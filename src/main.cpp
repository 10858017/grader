#include <iostream>
#include <string>
#include "../include/student.h"

int main(){
	std::string fileName = "./test_files/ADRIANO T ALFORQUE NSCAS Growth Winter 2023 Grade 8.pdf";
	poppler::document* pdf = poppler::document::load_from_file(fileName);
	Student my_student = Student("Hey babe");
    std::cout << my_student.getOverallScore();

	if(!pdf){
		std::cout << "Failed to open file" << std::endl;
		return 1;
	}
	auto cur_page = pdf->create_page(0);
	
	// Get text content using ustring
    poppler::ustring text = cur_page->text();
    
    // Convert poppler::ustring to std::string for printing
    std::string utf8_text(text.to_utf8().data());
    
    // Print the text content
    std::cout << "Text content of page 1:\n" << utf8_text << "\n";

	cur_page = pdf->create_page(1);
	
	// Get text content using ustring
    text = cur_page->text();
    
    // Convert poppler::ustring to std::string for printing
    utf8_text = text.to_utf8().data();
    
    // Print the text content
    std::cout << "Text content of page 2:\n" << utf8_text << "\n";

}

Student process_page_1(poppler::page page){

}
