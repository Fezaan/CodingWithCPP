void sortedInsert(    stack<int>& s,int element)
{
    if(s.empty() || s.top() <element)
    {
        s.push(element);
        return;
    }
    
    int num=s.top();
    s.pop();
    sortedInsert(s,element);
    s.push(num);
    
}

void SortedStack :: sort()
{
   //Your code here
   
   if(s.empty())
   {
       return ;
   }
   
   int num=s.top();
   s.pop();
   sort();
   sortedInsert(s,num);
   
}