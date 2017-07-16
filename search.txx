/*
This program was created by Sasha Morgan.
The purpose of this program is the run a search on an inputed file and return the closets value;
PID: sasha97
*/
#include "search.h"

// implement the three functions here

template <typename T>
SearchResultType<T>  linear_search(const std::vector<T> &list, const T &value){
	
	bool result = false; //default value
    long i = 0; //default value
    T v = list[0]; //default value

	int size = list.size(); //determines the size of the template type
	
	for(int j = 0; j < size; j++)    //visit each element of the array, starting at 0 and loop
     {
           if (value == list[j])   //compare element value to search value = true
		   {
		   result = true;
		   i = j;
		   v = list[j];
		   return SearchResultType<T>(result, v, i);
		   }
     }
	 return SearchResultType<T>(result, v, i);
}

template <typename T>
SearchResultType<T> iterative_binary_search(const std::vector<T> &list, const T &value)
{
	 bool result = false;
     long i = 0;
     T v = list[0];


     int low = 0;
     int high = list.size() - 1;
     int middle;

     while (low <= high)
     {
           middle = (low + high) / 2;  // define
 
           if (value == list[middle])   //compare element value to search value = true
           {
                result = true;
                i = middle;
                v = list[middle];
				return SearchResultType<T>(result, v, i);
           }
           else if (value < list[middle])
           {
                high = middle - 1;
           }
           else
           {
                low = middle + 1;
           }
 
     }
	 

return SearchResultType<T>(result, v, i);

}

template <typename T>
SearchResultType<T> recursive_binary_search(const std::vector<T> &list, const T &value)
{
     bool result = false;
     long i = 0;
     T v = list[0];


     int low = 0;
     int high = list.size() - 1;
     int middle;

 if (low <= high) {
       middle = (low + high) / 2;  // compute mid point.
       if (value == list[middle]) 
	   {
                result = true;
                i = middle;
                v = list[middle];
				return SearchResultType<T>(result, v, i);
	    }
		else if(value < list[middle])
		{
		middle = middle - 1;
		}
		else{
		middle = middle+1;
		}
	}
	return SearchResultType<T>(result, v, i);

}
