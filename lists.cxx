// constructing lists
#include <iostream>
#include <list>

int main ()
{
  // constructors used in the same order as described above:
  std::list<int> first;                                // empty list of ints
  std::list<int> second (4,100);                       // four ints with value 100
  std::list<int> third (second.begin(),second.end());  // iterating through second
  std::list<int> fourth (third);                       // a copy of third
  std::list<int> sixth (5,50);

  std::cout << "The contents of second are: ";
  for (std::list<int>::iterator it = second.begin(); it != second.end(); it++)
    std::cout << *it << ' '; //whitespace pra criar espaço entre os 100s

  std::cout << '\n';

  std::cout << "The contents of sixth are: ";
  for (std::list<int>::iterator it = sixth.begin(); it != sixth.end(); it++)
    std::cout << *it << ' ';

  std::cout << '\n';

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  std::list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  std::cout << "The contents of fifth are: ";
  for (std::list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
    std::cout << *it << ' ';

  std::cout << '\n';

  return 0;
}
