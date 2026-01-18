#include <iostream>

int lol = 10;

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }
    
    void Info(const char* msg)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[Info]: "<< msg << std::endl;
    }
    
    void Error(const char* msg)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[Error]: "<< msg << std::endl;
    }

    void Warn(const char* msg)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[Warning]: "<< msg << std::endl;
    }
};


int main() 
{
    Log log;
    log.SetLevel(log.LogLevelInfo);
    log.Warn("Cris");
    log.Error("Leo");
    log.Info("Ney");
}