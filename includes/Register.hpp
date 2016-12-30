#if !defined(__REGISTER_HPP__)
# define __REGISTER_HPP__

template
<
    typename T=char
>
class Register
{
    public:
        Register(T value, char size);
        Register(Register const &);

    public:
        Register &operator=(Register const &);
        friend inline std::ostream &operator<<(std::ostream &out, Register const &reg);

    public:
        inline char const &size(void) const;
    public:
        ~Register(void);

    private:
        T m_value;
        char m_size;
};


#endif // !defined(__REGISTER_HPP__)
