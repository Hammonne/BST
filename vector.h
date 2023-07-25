#ifndef _vector_h
#define _vector_h
template<typename T>
class vector{
    
    using value_type = T;
    using pointer = value_type*;
    using size_type = std::size_t;
    using reference=value_type&;
    using const_reference=const value_type&;

    pointer data;
    size_type size;
    public:
    vecttor()=default;
    vector(pointer data, size_type size) : data(data), size(size) {};
    vector& operator=(consr vector&other);
    vector& operator=( const vector& other );
    vector( vector&& other ) noexcept;
    ~vector();

    //element access
    reference at( size_type pos );
    const_reference at( size_type pos ) const;
    reference operator[]( size_type pos );
    const_reference operator[]( size_type pos ) const;
    reference front();
    const_reference front();

};
#endif