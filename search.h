/*
This program was created by Sasha Morgan.
The purpose of this program is the run a search on an inputed file and return the closets value;
PID: sasha97
*/
#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <vector>

template <typename T> struct SearchResultType {
  SearchResultType(bool f, T &v, long i) : found(f), value(v), index(i){};
  bool found;
  T value;
  long index;
};

template <typename T>
SearchResultType<T> linear_search(const std::vector<T> &list, const T &value);

template <typename T>
SearchResultType<T> iterative_binary_search(const std::vector<T> &list,
                                            const T &value);

template <typename T>
SearchResultType<T> recursive_binary_search(const std::vector<T> &list,
                                            const T &value);

#include "search.txx"

#endif // _SEARCH_H_
