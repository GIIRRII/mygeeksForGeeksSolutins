/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{   
    int i = 0;
    if(!s1.empty() && s2.empty())
    {
        while(!s1.empty())
            { 
                s2.push(s1.top());
                s1.pop();
            }
        i= s2.top();
        s2.pop();
        return i;
    } 
    else
    if(s1.empty()&& s2.empty())
        return -1;
    else
    {
        i = s2.top();
        s2.pop();
        return i;
    }
    
     
}