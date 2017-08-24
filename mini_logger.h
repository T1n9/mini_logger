#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>


class Logger
{
public:
    explicit Logger(std::ostream& os = std::cout);
    explicit Logger(const char* );
    explicit Logger(const std::string&);

    virtual ~Logger();
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;


    std::string get_folder_abs_path()const;

    void error_handler();

    template<typename T>
    friend Logger& operator <<(Logger& r, const T& message)
    {
        r.os<<((message == std::string("Logger::endl"))?("\n"):(message));
        return r;
    }

    static const std::string endl;

private:
    std::ofstream file_stream;
    std::ostream& os;

};




#endif // LOGGER_H
