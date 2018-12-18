#include"mini_logger.h"

#include  <direct.h>


int main()
{
  Logger logger("test.txt");
  logger << "just a example logging file" << logger.endl;
  logger<<logger.endl<<"testing endl";


	//std::cin.get();
  
	return 0;
}
