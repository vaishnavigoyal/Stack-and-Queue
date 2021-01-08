// Question : Calculating minimum element in the stack in O(1) time
// Source : CP algorithms
// adding or removing a new element to the stack can be done in constant time

int min_element_stack()
{
  stack<pair<int, int>> st;
  // Adding an element
  int new_min = st.empty() ? new_elem : min(new_elem, st.top().second);
  st.push({new_elem, new_min});
  // Minimum element
  int minimum = st.top().second;
  return minimum;
}
