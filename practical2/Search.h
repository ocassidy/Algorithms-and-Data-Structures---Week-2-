/**
 * Search.h
 *
 * Template based Search Functions
 *
 * @author  Your name
 * @email   your email
 * @version 1.0
 */

#ifndef SEARCH_H_
#define SEARCH_H_

#include "Array.h"

// PreCondition: items Array is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int sequentialSearch( ...items, ...keys ) {

}

// PreCondition: items Aarray is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int binarySearch( ...items, ...key ) {
   
}

// PreCondition: Data array is full
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrence( ... ) {
	
}

// PreCondition: Data array is full and sorted
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrenceOrdered( ... ) {

}

// PreCondition: Both Arrays are filled with values of type T. 
//               items - values to be searched. keys - values to search for
// PostCondition: return true if all keys are found, otherwise false
bool containsAll(...items, ...keys) { }

#endif	/* SEARCH_H_ */