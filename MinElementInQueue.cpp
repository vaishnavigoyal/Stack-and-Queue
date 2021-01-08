// Question : Calculating minimum element in the queue in O(1) time
// Source : CP algorithms
// Here we consider a simple method for modifying a queue. It has a big disadvantage though, because the modified queue will actually not store all elements
// the smallest element will always be in the head of the queue.

int min_element_queue()
{
  deque<int> q;

  int minimum = q.front();

  while (!q.empty() && q.back() > new_element)
    q.pop_back();

  q.push_back(new_element);
  
  return q.front();
}
