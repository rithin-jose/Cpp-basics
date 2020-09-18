#include<iostream>
#include<Vector>

using namespace std;

int main()
{
    vector<int> V;
    int len;
    //push_back
    // begin() – Returns an iterator pointing to the first element in the Vector
    // end() – Returns an iterator pointing to the theoretical element that follows the last element in the Vector
    // rbegin() – Returns a reVerse iterator pointing to the last element in the Vector (reVerse beginning). It moVes from last to first element
    // rend() – Returns a reVerse iterator pointing to the theoretical element preceding the first element in the Vector (considered as reVerse end)
    // cbegin() – Returns a constant iterator pointing to the first element in the Vector.
    // cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the Vector.
    // crbegin() – Returns a constant reVerse iterator pointing to the last element in the Vector (reVerse beginning). It moVes from last to first element
    // crend() – Returns a constant reVerse iterator pointing to the theoretical element preceding the first element in the Vector (considered as reVerse end)
    cin>>len;

    for(int i = 0;i<len;i++)
        V.push_back(i);

    cout << "Output of begin and end: "; 
    for (auto i = V.begin(); i != V.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = V.cbegin(); i != V.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = V.rbegin(); ir != V.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = V.crbegin(); ir != V.crend(); ++ir) 
        cout << *ir << " "; 

    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    // size() – Returns the number of elements in the Vector.
    // max_size() – Returns the maximum number of elements that the Vector can hold.
    // capacity() – Returns the size of the storage space currently allocated to the Vector expressed as number of elements.
    // resize(n) – Resizes the container so that it contains ‘n’ elements.
    // empty() – Returns whether the container is empty.
    // shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    // reserVe() – Requests that the Vector capacity be at least enough to contain n elements.
    cout << "Size : " << V.size(); 
    cout << "\nCapacity : " << V.capacity(); 
    cout << "\nMax_Size : " << V.max_size(); 
    V.resize(5);
    cout << "\nSize : " << V.size(); 

    if (V.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the Vector 
    V.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = V.begin(); it != V.end(); it++) 
        cout << *it << " "; 
    cout<<endl;
    cout<<endl;
    cout<<endl;
    // reference operator [g] – Returns a reference to the element at position ‘g’ in the Vector
    // at(g) – Returns a reference to the element at position ‘g’ in the Vector
    // front() – Returns a reference to the first element in the Vector
    // back() – Returns a reference to the last element in the Vector
    // data() – Returns a direct pointer to the memory array used internally by the Vector to store its owned elements.

    
    cout << "\nReference operator [g] : V[2] = " << V[2]; 
    cout << "\nat : V.at(4) = " << V.at(4); 
    cout << "\nfront() : V.front() = " << V.front(); 
    cout << "\nback() : V.back() = " << V.back(); 
  
    // pointer to the first element 
    int* pos = V.data(); 
    cout << "\nThe first element is " << *pos; 
    cout<<endl;
    cout<<endl;
    cout<<endl;

    // assign() – It assigns new Value to the Vector elements by replacing old ones
    // push_back() – It push the elements into a Vector from the back
    // pop_back() – It is used to pop or remoVe elements from a Vector from the back.
    // insert() – It inserts new elements before the element at the specified position
    // erase() – It is used to remoVe elements from a container from the specified position or range.
    // swap() – It is used to swap the contents of one Vector with another Vector of same type. Sizes may differ.
    // clear() – It is used to remoVe all the elements of the Vector container
    // emplace() – It extends the container by inserting new element at position
    // emplace_back() – It is used to insert a new element into the Vector container, the new element is added to the end of the Vector

    // fill the array with 10 fiVe times 
    V.assign(5, 10); 
  
    cout << "The Vector elements are: "; 
    for (int i = 0; i < V.size(); i++) 
        cout << V[i] << " "; 
  
    // inserts 15 to the last position 
    V.push_back(15); 
    int n = V.size(); 
    cout << "\nThe last element is: " << V[n - 1]; 
  
    // remoVes last element 
    V.pop_back(); 
  
    // prints the Vector 
    cout << "\nThe Vector elements are: "; 
    for (int i = 0; i < V.size(); i++) 
        cout << V[i] << " "; 
  
    // inserts 5 at the beginning 
    V.insert(V.begin(), 5); 
  
    cout << "\nThe first element is: " << V[0]; 
  
    // remoVes the first element 
    V.erase(V.begin()); 
  
    cout << "\nThe first element is: " << V[0]; 
  
    // inserts at the beginning 
    V.emplace(V.begin(), 5); 
    cout << "\nThe first element is: " << V[0]; 
  
    // Inserts 20 at the end 
    V.emplace_back(20); 
    n = V.size(); 
    cout << "\nThe last element is: " << V[n - 1]; 
  
    // erases the Vector 
    V.clear(); 
    cout << "\nVector size after erase(): " << V.size(); 
  
    // two Vector to perform swap 
    vector<int> V1, V2; 
    V1.push_back(1); 
    V1.push_back(2); 
    V2.push_back(3); 
    V2.push_back(4); 
  
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < V1.size(); i++) 
        cout << V1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < V2.size(); i++) 
        cout << V2[i] << " "; 
  
    // Swaps V1 and V2 
    V1.swap(V2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < V1.size(); i++) 
        cout << V1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < V2.size(); i++) 
        cout << V2[i] << " "; 
    

    return 0;
}