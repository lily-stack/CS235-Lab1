#include <iostream>
#include <fstream>
#include <string>
#include "TodoList.h"
using namespace std;

int main(int argc, char *argv[]){
	TodoList myList;
  for (int i =  0; i < argc; i++){
    cout << "argv[" << i << "] = " << argv[i] << endl;
	}
  string firstarg = argv[1];
  if (firstarg.compare("add") == 0) 
  {
    cout << "Doing an add" << endl;
		string date = argv[2];
		string task = argv[3];
		cout << "date: " << date << " task: " << task << endl;
		myList.add(date, task);
  }
	if (firstarg.compare("remove") == 0) {
		cout << "Doing a remove" << endl;
		string task = argv[2];
		cout << "task: " << task << endl;
		myList.remove(task);
	}
	if (firstarg.compare("printList") == 0) {
		myList.printTodoList();
	}
	if (firstarg.compare("printDay") == 0) {
		string date = argv[2];
		myList.printDaysTasks(date);
	}
}