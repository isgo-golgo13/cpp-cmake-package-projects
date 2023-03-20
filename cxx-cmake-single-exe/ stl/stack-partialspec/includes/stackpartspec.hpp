#include "stack.hpp"
#include <memory>


template<typename T>
class Stack<std::shared_ptr<T>> {
    private:
      std::vector<std::shared_ptr<T>> m_elems;

    public:
       void push(std::shared_ptr<T> elem);
       std::shared_ptr<T> pop();
       std::shared_ptr<T> top() const;
       bool is_empty() const { return m_elems.empty(); }
};

template <typename T>
void Stack<std::shared_ptr<T>>::push(std::shared_ptr<T> elem) { m_elems.push_back(elem); }

template <typename T> 
std::shared_ptr<T> Stack<std::shared_ptr<T>>::pop() 
{
    assert(!m_elems.empty());
    T* p = m_elems.back();
    m_elems.pop_back();

    return p;
}

template <typename T>
std::shared_ptr<T> Stack<std::shared_ptr<T>>::top() const 
{
    assert(!m_elems.empty());
    return  m_elems.back();
}
