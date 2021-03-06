
#ifndef ABSTRACT_GRADER_H
#define ABSTRACT_GRADER_H

#include <vector>
#include <string>
#include <map>
#include "TestCase.h"
#include "Date.h"
#include "Random.h"
#include "Interfaces02.h"

class AbstractGrader {
public:
  AbstractGrader();
  virtual ~AbstractGrader();
  virtual int size() = 0;
  virtual std::string getDescription(int test_case) = 0;
  virtual int getPoints(int test_case) = 0;
  virtual Date getDueDate() = 0;
  virtual TestCase * grade(int test_case) = 0;
  void setDllHandle(void * dll_handle);
protected:
  void createVector(std::vector<int>& input, std::vector<int>& sorted, 
    int order, int len, bool duplicates);

  void viewVector(std::vector<int>& input, std::vector<int>& output, int len,
    int order);

  bool valuesEqual(IVectorString * user_values, 
    std::vector<std::string>& gold_values);

  bool sortedEqual(IVectorKeyValue * user_sorted, 
    std::vector<std::pair<int, std::string> > gold_vector);

  void print(IVectorKeyValue * vector);
  void print(std::vector<std::pair<int, std::string> >& vector);
  void print(IVectorString * values);
  void print(std::vector<std::string>& values);

  std::string randomValue();
  TestCase * nullObject(std::string iface);
  TestCase * failed(std::string error_message);
  TestCase * passed(long time);
  std::string toString(int value);
  void * createObject(std::string name);
  void * m_dllHandle;
  
  const std::string m_letters;
  Random m_rand;
};

#endif
