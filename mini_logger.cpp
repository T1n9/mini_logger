#include <logger.h>
#include <unistd.h>

const std::string Logger::endl = "Logger::endl";

Logger::Logger(std::ostream &os):
    os(os)
{}

Logger::Logger(const char * file_path):
    Logger{std::string(file_path)}
{}

Logger::Logger(const std::string& file_path):
    file_stream((get_folder_abs_path()+file_path).c_str()),
    os(file_stream)
{
    if (!os)
        error_handler();
}

void Logger::error_handler()
{
    //sending msg to server that logger cannot be started
}

Logger::~Logger()
{
}


std::string Logger::get_folder_abs_path() const
{
    std::string exe_path(realpath("/proc/self/exe", NULL));
    return exe_path.substr(0, exe_path.find_last_of("//")+1);
}


