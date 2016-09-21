#include "../../C/UTILITY.H"
#include "../../C/UTILITY.CPP"
#include "QUEUE.H"
 
void main()
{
   cout << "Enter lines of text and the program duplicates them." << endl;
   cout << "Use Ctrl-Z (EOF) to terminate the program." << endl;
   while (cin.peek() != EOF) {
      Queue q;
      char c;
      while ((c = cin.get()) != '\n')
         q.append(c);
      while (!q.empty()) {
         q.retrieve(c);
         cout << c;
         q.serve();
      }
      cout << endl;
   }
}
