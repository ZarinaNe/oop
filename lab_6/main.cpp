#include "Windows.h"
#include "app_generator.h"
#include "page_generator.h"
int main() {
	std::string os = "Windows";
	buildTestPage(os);
	//std::cout << appGenerator(os) << std::endl;
	return 0;
}