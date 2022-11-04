#ifndef QCIRParser_h
#define QCIRParser_h

#include <vector>
#include <string>
#include "QBFParser.h"

using std::vector;
using std::string;

class SCIRParser: virtual public QBFParser {
  public:
    SCIRParser(const string& filename);

  protected:
    SCIRParser();
    void readQuantifierBlock(const string& line);
    void readGate(const string& line);
    void readOutput(const string& line);

    static const string EXISTS_STRING;
    static const string FORALL_STRING;
    static const string RANDOM_STRING;
    static const string OUTPUT_STRING;
    static const string AND_STRING;
    static const string OR_STRING;
};

#endif