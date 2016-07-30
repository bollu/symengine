#ifndef SYMENGINE_EXCEPTION_H
#define SYMENGINE_EXCEPTION_H

typedef enum {
    SYMENGINE_NO_EXCEPTION = 0,
    SYMENGINE_DIV_BY_ZERO,
    SYMENGINE_NOT_IMPLEMENTED,
    SYMENGINE_UNDEFINED
} symengine_exceptions_t;

#ifdef __cplusplus

namespace SymEngine
{

class SymEngineException : public std::exception
{
    std::string m_msg;
    symengine_exceptions_t ec;

public:
    SymEngineException(const std::string &msg, symengine_exceptions_t error)
        : m_msg(msg), ec(error)
    {
    }
    const char *what() const throw()
    {
        return m_msg.c_str();
    }
    symengine_exceptions_t error_code()
    {
        return ec;
    }
};

class DivisionByZero : public SymEngineException
{
public:
    DivisionByZero(const std::string &msg)
        : SymEngineException(msg, SYMENGINE_DIV_BY_ZERO)
    {
    }
};

class NotImplemented : public SymEngineException
{
    NotImplemented(const std::string &msg)
        : SymEngineException(msg, SYMENGINE_NOT_IMPLEMENTED)
    {
    }
};
}
#endif // __cplusplus
#endif // SYMENGINE_EXCEPTION_H
