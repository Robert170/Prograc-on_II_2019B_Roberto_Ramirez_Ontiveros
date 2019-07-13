#pragma once
#include "List.h"

class SingleList;
class DoubleList;
class SingleNode;
class DoubleNode;

class Sort {
private:
	/**
	 * TODO implement
	 * Swaps two single nodes
	 * @param [SingleNode *] The first node to swap
	 * @param [SingleNode *] The second node to swap
	 * @return [SingleNode *] The pointer to the second Node to finalize the swaping outside this function
	 */
	static SingleNode* swap(SingleNode *, SingleNode *);

	/**
	 * TODO implement
	 * Swaps two single nodes
	 * @param [DoubleNode *] The first node to swap
	 * @param [DoubleNode *] The second node to swap
	 * @return [DoubleNode *] The pointer to the second Node to finalize the swaping outside this function
	 */
	static DoubleNode* swap(DoubleNode *, DoubleNode *);

public:

	/**
	 * TODO implement
	 * Sorts the given single linked list using the BubbleSort method
	 * @param [SingleList &] the list to be sorted
	 */
	static void bubble(SingleList &);

	/**
	 * TODO implement
	 * Sorts the given double linked list using the BubbleSort method
	 * @param [DoubleList &] the list to be sorted
	 */
	static void bubble(DoubleList &);

	/**
	 * TODO implement
	 * Sorts the given single linked list using the QuickSort method
	 * @param [SingleList &] the list to be sorted
	 */
	static void quick(SingleList &);

	/**
	 * TODO implement
	 * Sorts the given double linked list using the QuickSort method
	 * @param [DoubleList &] the list to be sorted
	 */
	static void quick(DoubleList &);
};
