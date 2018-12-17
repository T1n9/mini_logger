#include"mini_logger.h"

int main()
{
  Logger logger;
  logger << "just a example logging file" << logger.endl;
  logger<<logger.endl<<"testing endl";
  
  return 0;
}
