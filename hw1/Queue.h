#pragma once
template <typename Object>
class Queue
{
public:
    bool isEmpty() const
    {
        return true;
    }
    const Object& getFront() const
    {
        return 1;
    }
    void enqueue(const Object& x)
    {
    }
    Object& dequeue()
    {
        return *theList.begin();
    }
private:
    List<Object> theList;
};
