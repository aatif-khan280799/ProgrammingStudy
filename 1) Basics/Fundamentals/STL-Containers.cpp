#include <bits/stdc++.h>

using namespace std;

int main()
{
	// pair
	pair<int, int> p1 = {1, 4};
	cout << p1.first << " " << p1.second << endl;

	pair<int, pair<int, int>> p2 = {1, {4, 5}};
	cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

	pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
	cout << arr[2].first << " " << arr[2].second << endl;

	// vector
	vector<int> v;
	v.push_back(1);
	v.emplace_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	cout << v[0] << " " << v.at(1) << endl;
	cout << "back(): " << v.back() << endl;

	vector<pair<int, int>> vec;
	vec.push_back({3, 4});
	vec.emplace_back(5, 6);

	vector<int> v1(5, 100);
	vector<int> v2(5);

	vector<int>::iterator it = v1.begin();
	it++;
	cout << *(it) << endl;

	// // Printing the vectors
	cout << "Printing the vector using iterator for loop!!!" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << endl;
	}

	// alternate way to use for loop to print vector --> shortcut of above way.
	for (auto it = v1.begin(); it != v1.end(); it++)
	{
		cout << *(it) << endl;
	}

	// alternate way 2 to use for loop to print vector
	cout << "Using for-each loop!";
	for (auto it : v1)
	{
		cout << it << endl;
	}

	// Erasing the data in the vector
	cout << "Erasing the data in the vector!!" << endl;
	cout << "Vector before erasing: " << endl;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << endl;
	}

	// v.erase(v.begin()+1);

	v.erase(v.begin() + 2, v.begin() + 4);
	cout << "Vector after erasing the data" << endl;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << endl;
	}

	// Insert operation
	cout << "Performing insert operation" << endl;
	vector<int> vt(2, 100);
	vt.insert(vt.begin(), 300);
	for (auto it : vt)
	{
		cout << it << endl;
	}

	cout << "Inserting few more elements: " << endl;
	vt.insert(vt.begin() + 1, 2, 90);
	for (auto it : vt)
	{
		cout << it << endl;
	}

	cout << "Printing the size of the vector vt: " << vt.size() << endl;

	vector<int> copy(2, 50);
	vt.insert(vt.begin(), copy.begin(), copy.end());
	cout << "Copy and insert operation: " << endl;
	for (auto it : vt)
	{
		cout << it << endl;
	}

	cout << "Pop operation: " << endl;
	vt.pop_back();
	for (auto it : vt)
	{
		cout << it << endl;
	}

	// LIST
	list<int> ls;
	ls.push_back(4);	 //{4}
	ls.emplace_back(3);	 //{4,3}
	ls.push_front(2);	 //{2,4,3}
	ls.emplace_front(1); //{1,2,4,3}
	for (auto it : ls)
	{
		cout << it << endl;
	} // rest all the funtions are same as that of vectors.

	// Dequeue
	deque<int> dq;
	dq.push_back(1);
	dq.emplace_back(2);
	dq.push_front(3);
	dq.emplace_front(4);
	for (auto it : dq)
	{
		cout << it << endl;
	}

	// Stack (LIFO - Last In First Out)
	stack<int> st;
	st.push(1);				  // {1}
	st.push(2);				  //  {2,1}
	st.push(3);				  //  {3,2,1}
	st.emplace(4);			  // {4,3,2,1}
	cout << st.top() << endl; //{4}  --> LIFO concept
	st.pop();				  // deletes top element;
	cout << "after pop operation : " << st.top() << endl;
	cout << "size: " << st.size() << endl;
	cout << "Is stack empty? " << st.empty() << endl;

	// Queue (FIFO - First In First Out)
	queue<int> q;
	q.push(4);				  //{4}
	q.push(2);				  //{4,2}
	q.emplace(9);			  //{4,2,9}
	q.back() += 5;			  //{4,2,14}
	cout << q.back() << endl; //{14}

	// Priority Queue  --> Max Heap
	cout << "-------MAX_HEAP-------" << endl;
	priority_queue<int> pq;
	pq.push(5);		// {5}
	pq.push(2);		// {5,2}
	pq.push(8);		// {8,5,2}
	pq.emplace(10); // {10,8,5,2}
	pq.emplace(1);	//{10,8,5,2,1}
	cout << pq.top() << endl;
	pq.pop();
	cout << pq.top() << endl;

	// Priority Queue  --> Min Heap
	cout << "-------MIN_HEAP-------" << endl;
	priority_queue<int, vector<int>, greater<int>> p;
	p.push(5);				 // {5}
	p.push(2);				 // {2,5}
	p.push(8);				 // {2,5,8}
	p.emplace(10);			 // {2,5,8,10}
	p.emplace(1);			 //{1,2,5,8,10}
	cout << p.top() << endl; //{1}
	p.pop();
	cout << p.top() << endl; //{2}

	// Set
	set<int> s;
	s.insert(1);  // {1}
	s.insert(2);  // {1,2}
	s.emplace(2); // {1,2}
	s.insert(4);  // {1,2,4}
	s.insert(3);  //  {1,2,3,4}
	cout << s.count(1) << " " << s.count(2) << " " << s.count(3) << " "
		 << s.count(4) << " " << s.count(5) << " " << s.count(6) << endl;

	// Map
	map<int, int> mpp;	
	mpp[1] = 2;
	mpp.insert({3, 1});
	mpp.insert({2, 4});
	// map is stored as {sorted key} order and value.
	for (auto it : mpp)
	{
		cout << it.first << " " << it.second << endl;
	}
	cout << mpp[2] << ":" << mpp[5] << endl;
	return 0;
}