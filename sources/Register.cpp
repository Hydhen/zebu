#include <iostream>

#include "Register.hpp"


template
<
    typename T
>
Register<T>::Register(T value, char size)
: m_value(value), m_size(size)
{

}

template
<
    typename T
>
Register<T>::Register(Register const &other)
: m_value(other.m_value), m_size(other.m_size)
{

}

template
<
    typename T
>
Register<T> &
Register<T>::operator=(Register const &other)
{
    if (this != &other)
    {
        this->m_value = other.m_value;
        this->m_size = other.m_size;
    }
    return (*this);
}

template
<
    typename T
>
inline
std::ostream &
operator<<(std::ostream &out, Register<T> const &reg)
{
    out << "<Register value=" << reg.m_value << ", size=" << reg.m_size << ">";
    return (out);
}

template
<
    typename T
>
inline
char const &
Register<T>::size(void) const
{
    return (this->m_size);
}

template
<
    typename T
>
Register<T>::~Register(void)
{

}
