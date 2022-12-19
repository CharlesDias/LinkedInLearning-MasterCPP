// queue.cpp by Bill Weinman <http://bw.org/>
// updated 2018-09-14 for CppSTL
#include <iostream>
#include <list>
#include <deque>
#include <queue>
#include <string>
using namespace std;

template <typename T>
void report_queue(T &q)
{
   size_t sz = q.size();
   cout << "size: " << sz;
   if (sz)
      cout << " front: " << q.front() << " back: " << q.back();
   cout << endl;
}

// print a simple message
void message(const char *s) { cout << s << endl; }

int main()
{
   // queue from list
   message("initialize queue from list");
   list<int> l1 = {1, 2, 3, 4, 5};
   queue<int, list<int>> q1(l1); // constructor copies to new list
   report_queue(q1);
   cout << endl;

   message("pop all from q1");
   while (!q1.empty())
   {
      cout << q1.front() << " ";
      q1.pop();
   }
   cout << endl;
   report_queue(q1);
   cout << endl;

   // default queue (deque) is used as a second parameter
   queue<string> q2;
   message("push strings onto q2");
   for (string s : {"one", "two", "three", "four", "five"})
   {
      q2.push(s);
   }
   report_queue(q2);
   cout << endl;

   message("pop all from q2");
   while (!q2.empty())
   {
      cout << q2.front() << " ";
      q2.pop();
   }
   cout << endl;
   report_queue(q2);

   // queue from array
   message("initialize queue from queue");
   deque<int> d1 = {1, 2, 3, 4, 5, 6};
   queue<int, deque<int>> q3(d1); // constructor copies to new queue
   message("print all from q3");
   while (!q3.empty())
   {
      cout << q3.front() << " ";
      q3.pop();
   }
   cout << endl;
   report_queue(q3);
   cout << endl;

   return 0;
}